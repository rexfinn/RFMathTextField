//
//  RFMathTextField.h
//  RFMathTextFieldDemo
//
//  Created by Rudd Fawcett on 11/23/13.
//  Copyright (c) 2013 Rudd Fawcett. All rights reserved.
//

#import <UIKit/UIKit.h>

enum {
    RFMathTextFieldEquationTypeAddition,
    RFMathTextFieldEquationTypeSubtraction,
    RFMathTextFieldEquationTypeMultiplication,
    RFMathTextFieldEquationTypeDivision,
    RFMathTextFieldEquationTypeRandom,
    EnumTypeMax
};
typedef NSInteger RFMathTextFieldEquationTypes;

@interface RFMathTextField : UITextField <UITextFieldDelegate>

@property (nonatomic, readwrite) NSInteger equationAnswer;
@property (nonatomic, readwrite) BOOL answerCorrect;

-(id)initWithFrame:(CGRect)frame withEquation:(RFMathTextFieldEquationTypes)equationType andNotification:(NSString*)notification;
-(id)initWithFrame:(CGRect)frame withEquation:(RFMathTextFieldEquationTypes)equationType;
-(void)refreshEquation;

@end
