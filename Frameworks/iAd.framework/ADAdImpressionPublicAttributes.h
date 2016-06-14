/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADAdImpressionPublicAttributes : NSObject <NSSecureCoding> {
    NSString * _accessibilityLabel;
    NSURL * _audioURL;
    int  _contentAdServer;
    NSString * _descriptionForLCD;
    bool  _hasAction;
    NSString * _headlineForLCD;
    NSURL * _logoImageURL;
    double  _minimumIntervalBetweenPresentations;
    NSDictionary * _nativeMediaCreativeMetadata;
    NSArray * _nativeMetadata;
    double  _skipThreshold;
    NSURL * _staticImageURL;
    NSDictionary * _transparencyDetails;
    bool  _unbranded;
    NSString * _uniqueIdentifier;
    NSArray * _videoAssets;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, retain) NSURL *audioURL;
@property (nonatomic) int contentAdServer;
@property (nonatomic, copy) NSString *descriptionForLCD;
@property (nonatomic) bool hasAction;
@property (nonatomic, copy) NSString *headlineForLCD;
@property (nonatomic, retain) NSURL *logoImageURL;
@property (nonatomic) double minimumIntervalBetweenPresentations;
@property (nonatomic, retain) NSDictionary *nativeMediaCreativeMetadata;
@property (nonatomic, retain) NSArray *nativeMetadata;
@property (nonatomic) double skipThreshold;
@property (nonatomic, retain) NSURL *staticImageURL;
@property (nonatomic, retain) NSDictionary *transparencyDetails;
@property (nonatomic) bool unbranded;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (nonatomic, retain) NSArray *videoAssets;

+ (bool)supportsSecureCoding;

- (id)accessibilityLabel;
- (id)audioURL;
- (int)contentAdServer;
- (void)dealloc;
- (id)description;
- (id)descriptionForLCD;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAction;
- (id)headlineForLCD;
- (id)initWithCoder:(id)arg1;
- (id)logoImageURL;
- (double)minimumIntervalBetweenPresentations;
- (id)nativeMediaCreativeMetadata;
- (id)nativeMetadata;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAudioURL:(id)arg1;
- (void)setContentAdServer:(int)arg1;
- (void)setDescriptionForLCD:(id)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setHeadlineForLCD:(id)arg1;
- (void)setLogoImageURL:(id)arg1;
- (void)setMinimumIntervalBetweenPresentations:(double)arg1;
- (void)setNativeMediaCreativeMetadata:(id)arg1;
- (void)setNativeMetadata:(id)arg1;
- (void)setSkipThreshold:(double)arg1;
- (void)setStaticImageURL:(id)arg1;
- (void)setTransparencyDetails:(id)arg1;
- (void)setUnbranded:(bool)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setVideoAssets:(id)arg1;
- (double)skipThreshold;
- (id)staticImageURL;
- (id)transparencyDetails;
- (bool)unbranded;
- (id)uniqueIdentifier;
- (id)videoAssets;

@end