//
//  NSData+Addition.h
//  JadeKing
//
//  Created by 张森 on 2019/5/8.
//  Copyright © 2019 张森. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData (Addition)

// Mark - 加密128
- (NSData *)AES128EncryptWithKey:(NSString *)key iv:(NSString *)iv;

// Mark - 解密128
- (NSData *)AES128DecryptWithKey:(NSString *)key iv:(NSString *)iv;


// Mark - 加密256
- (NSData *)AES_256EncryptWithKey:(NSString *)key iv:(NSString *)iv;

// Mark - 解密256
- (NSData *)AES_256DecryptWithKey:(NSString *)key iv:(NSString *)iv;


// Mark - 加密CBC
- (NSData *)AESCBCEncryptWithKey:(NSString *)key iv:(NSString *)iv;

// Mark - 解密CBC
- (NSData *)AESCBCDecryptWithKey:(NSString *)key iv:(NSString *)iv;

- (NSString *)base64Encode;

@end

NS_ASSUME_NONNULL_END
