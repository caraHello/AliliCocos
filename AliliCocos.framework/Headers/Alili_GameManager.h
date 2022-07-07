//
//  Alili_GameManager.h
//  Alili_CocosSDK
//
//  Created by 三叶草☘️ on 2021/12/17.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NSString * (^Alili_CallFromCocosCallBack)(NSString * data);

@interface Alili_GameManager : NSObject

@property (nonatomic, strong) Alili_CallFromCocosCallBack callFromCocosCallBack;

/// 获取单例
+ (Alili_GameManager *) sharedInstance;

- (void)startGame;

- (void)endGame;

- (UIView *)getGameView;

///发送数据给cocos
- (void)callToCocos: (NSString *)data;

@end
