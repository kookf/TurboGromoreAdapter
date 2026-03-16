//
//  AnyThinkBaiduAdapter.h
//  AnyThinkBaiduAdapter
//
//  Created by GUO PENG on 2025/4/20.
//

#import <Foundation/Foundation.h>

//! Project version number for AnyThinkBaiduAdapter.
FOUNDATION_EXPORT double AnyThinkBaiduAdapterVersionNumber;

//! Project version string for AnyThinkBaiduAdapter.
FOUNDATION_EXPORT const unsigned char AnyThinkBaiduAdapterVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <AnyThinkBaiduAdapter/PublicHeader.h>


/**
 * 设置二段奖励信息
 * 注：需要在show之前调用，普通奖励该接口不生效
 * @param rewardType 奖励类型，0: 普通奖励(可不配置)，1:膨胀奖励、2: 翻倍奖励
 * @param basicReward 基础奖励数值(例如：10)，最多支持展示 5 位
 * @param basicUnit 基础奖励单位(例如：元)，最多支持展示 3 位
 * @param advancedReward 膨胀/翻倍奖励数值(例如: 40)，最多支持展示 5 位
 * @param advancedUnit 膨胀/翻倍奖励单位(例如：元)，最多支持展示 3 位
 * @param multiple 翻倍奖励的倍数(仅需传入数字)，例如2倍传入 @"2"
 */

/// all value is string
/// Key for Baidu rewarded video reward type (1=inflated reward, 2=multiplied reward)
FOUNDATION_EXTERN NSString *const kATBaiduRewardedVideoRewardType;

/// Key for Baidu rewarded video basic reward amount
FOUNDATION_EXTERN NSString *const kATBaiduRewardedVideoBasicReward;

/// Key for Baidu rewarded video basic reward unit (Yuan/Coin/Diamond etc.)
FOUNDATION_EXTERN NSString *const kATBaiduRewardedVideoBasicUnit;

/// Key for Baidu rewarded video advanced reward amount
FOUNDATION_EXTERN NSString *const kATBaiduRewardedVideoAdvancedReward;

/// Key for Baidu rewarded video advanced reward unit
FOUNDATION_EXTERN NSString *const kATBaiduRewardedVideoAdvancedUnit;

/// Key for Baidu rewarded video reward multiple (nil for no multiple)
FOUNDATION_EXTERN NSString *const kATBaiduRewardedVideoMultiple;

#import <AnyThinkBaiduAdapter/ATBaiduExtraConfig.h>
