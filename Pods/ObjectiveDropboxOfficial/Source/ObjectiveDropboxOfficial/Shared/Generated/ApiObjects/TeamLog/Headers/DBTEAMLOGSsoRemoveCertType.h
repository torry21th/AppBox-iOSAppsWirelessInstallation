///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSsoRemoveCertType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SsoRemoveCertType` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSsoRemoveCertType : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// (no description).
@property (nonatomic, readonly, copy) NSString *description_;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param description_ (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithDescription_:(NSString *)description_;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SsoRemoveCertType` struct.
///
@interface DBTEAMLOGSsoRemoveCertTypeSerializer : NSObject

///
/// Serializes `DBTEAMLOGSsoRemoveCertType` instances.
///
/// @param instance An instance of the `DBTEAMLOGSsoRemoveCertType` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSsoRemoveCertType` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGSsoRemoveCertType *)instance;

///
/// Deserializes `DBTEAMLOGSsoRemoveCertType` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSsoRemoveCertType` API object.
///
/// @return An instantiation of the `DBTEAMLOGSsoRemoveCertType` object.
///
+ (DBTEAMLOGSsoRemoveCertType *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
