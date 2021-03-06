/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRequestRideIntent : PBCodable <NSCopying> {
    _INPBLocation * _dropOffLocation;
    struct { 
        unsigned int usesApplePayForPayment : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBInteger * _partySize;
    _INPBDataString * _paymentMethodName;
    _INPBLocation * _pickupLocation;
    _INPBDataString * _rideOptionName;
    PBUnknownFields * _unknownFields;
    bool  _usesApplePayForPayment;
}

@property (nonatomic, retain) _INPBLocation *dropOffLocation;
@property (nonatomic, readonly) bool hasDropOffLocation;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasPartySize;
@property (nonatomic, readonly) bool hasPaymentMethodName;
@property (nonatomic, readonly) bool hasPickupLocation;
@property (nonatomic, readonly) bool hasRideOptionName;
@property (nonatomic) bool hasUsesApplePayForPayment;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBInteger *partySize;
@property (nonatomic, retain) _INPBDataString *paymentMethodName;
@property (nonatomic, retain) _INPBLocation *pickupLocation;
@property (nonatomic, retain) _INPBDataString *rideOptionName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) bool usesApplePayForPayment;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dropOffLocation;
- (bool)hasDropOffLocation;
- (bool)hasIntentMetadata;
- (bool)hasPartySize;
- (bool)hasPaymentMethodName;
- (bool)hasPickupLocation;
- (bool)hasRideOptionName;
- (bool)hasUsesApplePayForPayment;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)partySize;
- (id)paymentMethodName;
- (id)pickupLocation;
- (bool)readFrom:(id)arg1;
- (id)rideOptionName;
- (void)setDropOffLocation:(id)arg1;
- (void)setHasUsesApplePayForPayment:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setPartySize:(id)arg1;
- (void)setPaymentMethodName:(id)arg1;
- (void)setPickupLocation:(id)arg1;
- (void)setRideOptionName:(id)arg1;
- (void)setUsesApplePayForPayment:(bool)arg1;
- (id)unknownFields;
- (bool)usesApplePayForPayment;
- (void)writeTo:(id)arg1;

@end
