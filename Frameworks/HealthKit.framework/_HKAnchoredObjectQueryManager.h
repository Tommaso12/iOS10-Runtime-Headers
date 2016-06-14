/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAnchoredObjectQueryManager : NSObject {
    HKHealthStore * _healthStore;
    NSMutableDictionary * _observersByType;
    NSMutableDictionary * _outstandingQueriesByType;
    NSMutableDictionary * _queryStatesByType;
}

- (void).cxx_destruct;
- (void)_callObservers:(id)arg1 withType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;
- (void)_createQueryForType:(id)arg1 retryCount:(long long)arg2;
- (void)_handleQueryCallbackForType:(id)arg1 samplesAdded:(id)arg2 objectsDeleted:(id)arg3 error:(id)arg4 retryCount:(long long)arg5;
- (void)_handleQueryErrorForType:(id)arg1 retryCount:(long long)arg2;
- (void)_handleQuerySuccessForType:(id)arg1 samplesAdded:(id)arg2 objectsRemoved:(id)arg3;
- (id)_observersForType:(id)arg1;
- (long long)_queryStateForType:(id)arg1;
- (void)_removeQueryForType:(id)arg1;
- (void)_setQueryState:(long long)arg1 forType:(id)arg2;
- (void)_transitionToQueryFailureForType:(id)arg1;
- (bool)_typeRequiresNewQuery:(id)arg1;
- (void)addObserver:(id)arg1 forType:(id)arg2;
- (id)addObserverForType:(id)arg1 dispatchQueue:(id)arg2 usingHandler:(id /* block */)arg3;
- (id)addObserverForType:(id)arg1 operationQueue:(id)arg2 usingHandler:(id /* block */)arg3;
- (id)initWithHealthStore:(id)arg1;
- (void)removeObserver:(id)arg1 forType:(id)arg2;

@end