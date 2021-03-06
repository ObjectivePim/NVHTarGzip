//
//  NVHTarGzip.h
//  Pods
//
//  Created by Niels van Hoorn on 26/03/14.
//
//

#import <Foundation/Foundation.h>

@interface NVHTarGzip : NSObject
@property (nonatomic,strong) NSString* cachePath;
+ (NVHTarGzip*)shared;
- (void)unGzipFileAtPath:(NSString *)sourcePath toPath:(NSString *)destinationPath completion:(void(^)(NSError*))completion;
- (void)unTarFileAtPath:(NSString *)sourcePath toPath:(NSString *)destinationPath completion:(void(^)(NSError*))completion;
- (void)unTarGzipFileAtPath:(NSString*)sourcePath toPath:(NSString*)destinationPath completion:(void(^)(NSError*))completion;
@end
