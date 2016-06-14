/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIntentResponse : NSObject <INCacheableContainer, NSCopying, NSSecureCoding> {
    _INPBIntentResponse * _backingStore;
    long long  _code;
    NSUserActivity * _userActivity;
}

@property (nonatomic, readonly, copy) _INPBIntentResponse *backingStore;
@property (nonatomic, readonly) long long code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldOpenContainingApplication;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUserActivity *userActivity;

+ (long long)_codeFromErrorCode:(int)arg1;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (id)responseFailure;
+ (id)responseSuccess;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_impl;
- (id)_payloadResponseMessageData;
- (void)_setPayloadResponseMessageData:(id)arg1;
- (id)backingStore;
- (id)cacheableObjects;
- (long long)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)protoData;
- (void)setShouldOpenContainingApplication:(bool)arg1;
- (bool)shouldOpenContainingApplication;
- (id)userActivity;

@end