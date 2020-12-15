//
//  IDInfoViewController.h
//  IDCardRecognition
//
//

#import <UIKit/UIKit.h>

@class IDInfo;

@interface IDInfoViewController : UIViewController

// 身份证信息
@property (nonatomic,strong) IDInfo *IDInfo;

// 身份证图像
@property (nonatomic,strong) UIImage *IDImage;

@end
