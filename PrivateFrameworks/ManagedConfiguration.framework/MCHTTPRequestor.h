/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCHTTPRequestor : NSObject <NSURLConnectionDataDelegate> {
    NSArray * _anchorCertificates;
    id /* block */  _completionBlock;
    NSURLConnection * _connection;
    bool  _didFailDueToMissingCredentials;
    NSString * _password;
    NSMutableData * _responseData;
    id  _selfReference;
    bool  _shouldUseResponseBodyAsLoginPrompt;
    NSString * _username;
}

@property (nonatomic, retain) NSArray *anchorCertificates;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) NSURLConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didFailDueToMissingCredentials;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) id selfReference;
@property (nonatomic) bool shouldUseResponseBodyAsLoginPrompt;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (id)anchorCertificates;
- (id /* block */)completionBlock;
- (id)connection;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (bool)didFailDueToMissingCredentials;
- (void)didFinishWithError:(id)arg1;
- (id)init;
- (id)password;
- (id)responseData;
- (id)selfReference;
- (void)setAnchorCertificates:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)setDidFailDueToMissingCredentials:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setResponseData:(id)arg1;
- (void)setSelfReference:(id)arg1;
- (void)setShouldUseResponseBodyAsLoginPrompt:(bool)arg1;
- (void)setUsername:(id)arg1;
- (bool)shouldUseResponseBodyAsLoginPrompt;
- (void)startWithRequest:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificates:(id)arg4 completionBlock:(id /* block */)arg5;
- (id)username;

@end