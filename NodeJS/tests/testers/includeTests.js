var mod = require('../../'),
	QuickConnect = mod.QuickConnect,
	assert = require('assert'),
	fs = require('fs'),
	included = require('../testables/includedStack'),
	test
	
test = new QuickConnect

test.command("run all tests", function(){
    this.dcf(
        callAStack,
        callSeveralStacks
    )
})
module.exports = test

function callAStack(data, qc) {
    included.run('included stack',{'helol':'wold'},{
        end:function(data){
            assert(data.done)
            qc.asyncStackContinue()
        },
        error:function(err){
            qc.asyncStackError(err)
        },
        validateFail:function(fails) {
            try {
                assert.fail(fails)
            } catch (error) {
                qc.asyncStackError(error)
            }
        }
    })
    return qc.WAIT_FOR_DATA
}

function callSeveralStacks(data, qc) {
    var i, count = 3
    for (i = 0; i < count; i++) {
    (function(i){
        included.run('included stack',{'helol':'wold','num':i},{
            end:function(res){
                assert.equal(res.num, i)
                count --
                if (count) {
                    return
                }
                assert.equal(count, 0)
                qc.asyncStackContinue()
            },
            error:function(err){
                qc.asyncStackError(err)
            },
            validateFail:function(fails) {
                try {
                    assert.fail(fails)
                } catch (error) {
                    qc.asyncStackError(error)
                }
            }
        })
    })(i)
    }
    return qc.WAIT_FOR_DATA
}
