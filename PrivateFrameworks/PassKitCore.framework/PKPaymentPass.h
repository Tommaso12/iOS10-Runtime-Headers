/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentPass : PKPass <NSCopying, NSSecureCoding> {
    NSString * _appURLScheme;
    NSSet * _associatedApplicationIdentifiers;
    NSSet * _associatedWebDomains;
    NSString * _cobrandName;
    bool  _cobranded;
    NSSet * _devicePaymentApplications;
    PKPaymentApplication * _devicePrimaryInAppPaymentApplication;
    PKPaymentApplication * _devicePrimaryPaymentApplication;
    NSString * _localizedSuspendedReason;
    NSString * _messagePushTopic;
    NSURL * _messageServiceURL;
    NSSet * _paymentApplications;
    bool  _paymentOptionSelectable;
    NSString * _primaryAccountIdentifier;
    NSString * _primaryAccountNumberSuffix;
    NSString * _sanitizedPrimaryAccountNumber;
    bool  _supportsDPANNotifications;
    bool  _supportsDefaultCardSelection;
    bool  _supportsFPANNotifications;
    bool  _supportsSerialNumberBasedProvisioning;
    NSString * _transactionPushTopic;
    NSURL * _transactionServiceURL;
}

@property (nonatomic, readonly) unsigned long long activationState;
@property (nonatomic, copy) NSString *appURLScheme;
@property (nonatomic, copy) NSSet *associatedApplicationIdentifiers;
@property (nonatomic, copy) NSSet *associatedWebDomains;
@property (nonatomic, copy) NSString *cobrandName;
@property (getter=isCobranded, nonatomic) bool cobranded;
@property (readonly) NSString *deviceAccountIdentifier;
@property (readonly) NSString *deviceAccountNumberSuffix;
@property (nonatomic, copy) NSSet *devicePaymentApplications;
@property (nonatomic, retain) PKPaymentApplication *devicePrimaryInAppPaymentApplication;
@property (nonatomic, retain) PKPaymentApplication *devicePrimaryPaymentApplication;
@property (nonatomic, copy) NSString *localizedSuspendedReason;
@property (nonatomic, copy) NSString *messagePushTopic;
@property (nonatomic, copy) NSURL *messageServiceURL;
@property (nonatomic, copy) NSSet *paymentApplications;
@property (getter=isPaymentOptionSelectable, nonatomic) bool paymentOptionSelectable;
@property (nonatomic, copy) NSString *primaryAccountIdentifier;
@property (nonatomic, copy) NSString *primaryAccountNumberSuffix;
@property (getter=isPrivateLabel, nonatomic, readonly) bool privateLabel;
@property (nonatomic, copy) NSString *sanitizedPrimaryAccountNumber;
@property (nonatomic) bool supportsDPANNotifications;
@property (nonatomic) bool supportsDefaultCardSelection;
@property (nonatomic) bool supportsFPANNotifications;
@property (nonatomic) bool supportsSerialNumberBasedProvisioning;
@property (nonatomic, copy) NSString *transactionPushTopic;
@property (nonatomic, copy) NSURL *transactionServiceURL;

+ (unsigned long long)defaultSettings;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)_activationStateForApplicationState:(long long)arg1;
- (id)_localizedSuspendedReasonForAID:(id)arg1;
- (unsigned long long)activationState;
- (id)appURLScheme;
- (id)associatedApplicationIdentifiers;
- (id)associatedWebDomains;
- (bool)availableForAutomaticPresentationUsingBeaconContext;
- (bool)availableForAutomaticPresentationUsingVASContext;
- (id)cobrandName;
- (unsigned long long)contactlessActivationState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceAccountIdentifier;
- (id)deviceAccountNumberSuffix;
- (id)devicePaymentApplications;
- (id)devicePrimaryInAppPaymentApplication;
- (id)devicePrimaryPaymentApplication;
- (long long)effectiveContactlessPaymentApplicationState;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasContactlessDevicePaymentApplicationsAvailable;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (bool)isCobranded;
- (bool)isDevicePrimaryPaymentApplicationPersonalized;
- (bool)isPaymentOptionSelectable;
- (bool)isPrivateLabel;
- (id)localizedSuspendedReason;
- (id)messagePushTopic;
- (id)messageServiceURL;
- (id)paymentApplicationForAID:(id)arg1;
- (id)paymentApplications;
- (id)paymentApplicationsForSecureElementIdentifiers:(id)arg1;
- (id)primaryAccountIdentifier;
- (id)primaryAccountNumberSuffix;
- (id)primaryPaymentApplicationForSecureElementIdentifiers:(id)arg1;
- (void)sanitizePaymentApplications;
- (id)sanitizedDeviceAccountNumber;
- (id)sanitizedPrimaryAccountNumber;
- (void)setAppURLScheme:(id)arg1;
- (void)setAssociatedApplicationIdentifiers:(id)arg1;
- (void)setAssociatedWebDomains:(id)arg1;
- (void)setCobrandName:(id)arg1;
- (void)setCobranded:(bool)arg1;
- (void)setDevicePaymentApplications:(id)arg1;
- (void)setDevicePrimaryInAppPaymentApplication:(id)arg1;
- (void)setDevicePrimaryPaymentApplication:(id)arg1;
- (void)setLocalizedSuspendedReason:(id)arg1;
- (void)setMessagePushTopic:(id)arg1;
- (void)setMessageServiceURL:(id)arg1;
- (void)setPaymentApplications:(id)arg1;
- (void)setPaymentOptionSelectable:(bool)arg1;
- (void)setPrimaryAccountIdentifier:(id)arg1;
- (void)setPrimaryAccountNumberSuffix:(id)arg1;
- (void)setSanitizedPrimaryAccountNumber:(id)arg1;
- (void)setSupportsDPANNotifications:(bool)arg1;
- (void)setSupportsDefaultCardSelection:(bool)arg1;
- (void)setSupportsFPANNotifications:(bool)arg1;
- (void)setSupportsSerialNumberBasedProvisioning:(bool)arg1;
- (void)setTransactionPushTopic:(id)arg1;
- (void)setTransactionServiceURL:(id)arg1;
- (bool)supportsDPANNotifications;
- (bool)supportsDefaultCardSelection;
- (bool)supportsFPANNotifications;
- (bool)supportsSerialNumberBasedProvisioning;
- (id)transactionPushTopic;
- (id)transactionServiceURL;
- (void)updateDevicePaymentApplicationsWithSecureElementIdentifiers:(id)arg1;

@end
