//
//  VCSafeObjectQueue.h
//  VideoCodecKitDemo
//
//  Created by CmST0us on 2018/9/21.
//  Copyright © 2018年 eric3u. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <pthread.h>

@interface VCSafeObjectQueue : NSObject
/**
 创建一个线程安全队列
 
 @param size 队列大小
 @return VCSafeObjectQueue实例
 */
- (VCSafeObjectQueue *)initWithSize:(int)size;

/**
 移除队列所有对象
 */
- (void)clear;

/**
 *  Gets the number of objects in queue.
 *
 *  @return the number of objects in queue
 */
/**
 当前队列对象个数
 
 @return 当前队列对象个数
 */
- (int)count;


/**
 当前队列大小
 
 @return 当前队列大小
 */
- (int)size;

/**
 把对象压入队列中

 @param object 对象
 @return 操作是否成功
 */
- (BOOL)push:(NSObject *)object;


/**
 从队列中拉取对象
 
 @return 对象
 */
- (NSObject *)pull;


/**
 队列是否满
 
 @return 是否满
 */
- (BOOL)isFull;


/**
 唤起所有线程
 */
- (void)wakeupReader;

@end

