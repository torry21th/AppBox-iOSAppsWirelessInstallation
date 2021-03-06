///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGGroupChangeExternalIdDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GroupChangeExternalIdDetails` struct.
///
/// Changed external ID for group.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGGroupChangeExternalIdDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Current external id.
@property (nonatomic, readonly, copy) NSString *dNewValue;

/// Old external id.
@property (nonatomic, readonly, copy) NSString *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue Current external id.
/// @param previousValue Old external id.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(NSString *)dNewValue previousValue:(NSString *)previousValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GroupChangeExternalIdDetails` struct.
///
@interface DBTEAMLOGGroupChangeExternalIdDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGGroupChangeExternalIdDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGGroupChangeExternalIdDetails`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGGroupChangeExternalIdDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGGroupChangeExternalIdDetails *)instance;

///
/// Deserializes `DBTEAMLOGGroupChangeExternalIdDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGGroupChangeExternalIdDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGGroupChangeExternalIdDetails`
/// object.
///
+ (DBTEAMLOGGroupChangeExternalIdDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
