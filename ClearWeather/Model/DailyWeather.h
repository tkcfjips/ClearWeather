//
//  DailyWeather.h
//  ClearWeather
//
//  Created by Kenichi Saito on 2/18/15.
//  Copyright (c) 2015 FarConnection. All rights reserved.
//

/****************************************
 
# 一週間の天気予報のデータをまとめて管理するためのクラス
 
- パースなどのロジックは全てモデルクラスに集約させる
 
****************************************/

#import <Foundation/Foundation.h>

@interface DailyWeather : NSObject

@property (nonatomic, strong) NSString* aDescription;
@property (nonatomic, strong) NSString* temp_min;
@property (nonatomic, strong) NSString* temp_max;
@property (nonatomic, strong) NSString* main;
@property (nonatomic, strong) NSString* dt;

+ (NSArray*)parseJSON:(NSDictionary*)data;

@end
