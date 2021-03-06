/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFDocumentPrivate : NSObject {
    bool  allowsCopying;
    bool  allowsPrinting;
    NSDictionary * attributes;
    struct __DDScanner { } * dataDetector;
    NSOperationQueue * dataDetectorQueue;
    id  delegate;
    struct CGPDFDocument { } * document;
    NSArray * documentCatalogMetadata;
    int  documentId;
    NSURL * documentURL;
    long long  findCharIndex;
    PDFSelection * findInstance;
    int  findModel;
    unsigned long long  findOptions;
    long long  findPageIndex;
    NSMutableArray * findResults;
    NSArray * findStrings;
    bool  finding;
    PDFForm * formData;
    bool  formDataLoaded;
    bool  isEncrypted;
    bool  isUnlocked;
    long long  lastFindCharIndex;
    long long  lastFindPageIndex;
    int  majorVersion;
    int  minorVersion;
    PDFOutline * outline;
    <PDFDocumentPageChangeDelegate> * pageChangeDelegate;
    unsigned long long  pageCount;
    NSMapTable * pageDictionaryMap;
    NSOperationQueue * pageLayoutThreadQueue;
    NSMutableArray * pages;
    NSString * password;
    long long  permission;
    bool  respondsToClassForAnnotation;
    bool  respondsToClassForPage;
    bool  respondsToDidBeginDocumentFind;
    bool  respondsToDidBeginPageFind;
    bool  respondsToDidEndDocumentFind;
    bool  respondsToDidEndPageFind;
    bool  respondsToDidFindMatch;
    bool  respondsToDidMatchString;
    bool  respondsToDidUnlock;
    bool  respondsToPrintJobTitle;
    bool  showsAnnotations;
    bool  sortAnnotations;
    NSString * xmpNameSpace;
    NSString * xmpPrefix;
    NSString * xmpRootPath;
}

- (void).cxx_destruct;

@end
