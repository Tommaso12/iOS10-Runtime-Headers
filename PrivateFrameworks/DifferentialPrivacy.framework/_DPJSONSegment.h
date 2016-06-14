/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPJSONSegment : NSObject {
    NSString * _key;
    NSArray * _records;
    NSString * _serverAlgorithmString;
}

@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly) NSArray *records;
@property (nonatomic, readonly, copy) NSString *serverAlgorithmString;

- (void).cxx_destruct;
- (id)init;
- (id)initWithKey:(id)arg1 serverAlgorithmString:(id)arg2 records:(id)arg3;
- (id)jsonSegmentString;
- (id)key;
- (id)records;
- (id)serverAlgorithmString;

@end