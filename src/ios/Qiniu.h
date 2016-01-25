//
//  Qiniu.h
//  好知音
//
//  Created by zoe on 16/1/22.
//
//

#import <Cordova/CDV.h>
#import "QiniuSimpleUploader.h"
#import "QiniuResumableUploader.h"

@interface Qiniu : CDVPlugin<QiniuUploadDelegate>

@property (retain, nonatomic)QiniuRioPutExtra *extra;
@property (retain, nonatomic)QiniuResumableUploader *rUploader;
@property (retain, nonatomic)QiniuSimpleUploader *sUploader;
@property (copy, nonatomic)NSString *filePath;
@property (copy, nonatomic)NSString *lastResumableKey;
@property (copy, nonatomic)NSString *token;
@property (copy) NSString* callbackId;
- (void)uploadFile:(CDVInvokedUrlCommand*)command;

@end
