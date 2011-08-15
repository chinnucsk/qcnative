/*
 Copyright (c) 2008, 2009 Lee Barney
 Permission is hereby granted, free of charge, to any person obtaining a 
 copy of this software and associated documentation files (the "Software"), 
 to deal in the Software without restriction, including without limitation the 
 rights to use, copy, modify, merge, publish, distribute, sublicense, 
 and/or sell copies of the Software, and to permit persons to whom the Software 
 is furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be 
 included in all copies or substantial portions of the Software.
 
 The end-user documentation included with the redistribution, if any, must 
 include the following acknowledgment: 
 "This product was created using the QuickConnect framework.  http://www.quickconnectfamily.org", 
 in the same place and form as other third-party acknowledgments.   Alternately, this acknowledgment 
 may appear in the software itself, in the same form and location as other 
 such third-party acknowledgments.
 
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, 
 INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
 PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT 
 HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF 
 CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE 
 OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 
 */

#import <UIKit/UIKit.h>


@interface QCMapper : NSObject {
	NSMutableDictionary *validationMap;
	NSMutableDictionary *businessMap;
	NSMutableDictionary *viewMap;
	NSMutableDictionary *errorMap;
	NSMutableDictionary *securityMap;
	NSMutableDictionary *databases;
}

@property (nonatomic, retain) NSMutableDictionary *validationMap;
@property (nonatomic, retain) NSMutableDictionary *businessMap;
@property (nonatomic, retain) NSMutableDictionary *viewMap;
@property (nonatomic, retain) NSMutableDictionary *errorMap;
@property (nonatomic, retain) NSMutableDictionary *securityMap;
@property (nonatomic, retain) NSMutableDictionary *databases;

/*
 *	Below are a series of helper methods for mapping various types of methods to commands.
 *	Use these methods to create your command/action relationships in the buildMaps method.
 */
- (void) mapCommandToValCO:(NSString*)aCommand withHandler:(Class)aHandlerClass;
- (void) mapCommandToBCO:(NSString*)aCommand withHandler:(Class)aHandlerClass;
- (void) mapCommandToVCO:(NSString*)aCommand withHandler:(Class)aHandlerClass;
- (void) mapCommandToECO:(NSString*)aCommand withHandler:(Class)aHandlerClass;
- (void) mapCommandToSCO:(NSString*)aCommand withHandler:(Class)aHandlerClass;

@end