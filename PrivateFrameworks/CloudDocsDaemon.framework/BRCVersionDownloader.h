/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCLocalContainer, BRCTransferQueue, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface BRCVersionDownloader : NSObject <BRCTransferQueueDelegate, BRCLifeCycle> {
    BRCLocalContainer *_container;
    NSMutableDictionary *_multiplexerForDesiredKeys;
    NSObject<OS_dispatch_queue> *_queue;
    BRCTransferQueue *_transferQueue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) NSObject<OS_dispatch_queue> * serialQueue;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_downloadCompletedForItemID:(id)arg1 etag:(id)arg2 downloadedObject:(id)arg3 error:(id)arg4;
- (void)_scheduleAllDownloads;
- (BOOL)_scheduleDownloadForItem:(id)arg1;
- (id)cancelAllDownloads;
- (void)cancelDownloadForItemID:(id)arg1;
- (void)close;
- (void)dumpToContext:(id)arg1;
- (id)initWithLocalContainer:(id)arg1;
- (BOOL)isDownloadingAddition:(id)arg1;
- (BOOL)isDownloadingItemID:(id)arg1;
- (id)multiplexerForDesiredKeys:(id)arg1;
- (void)resume;
- (id)serialQueue;
- (void)signalNeedsDownloads;
- (void)suspend;
- (void)transferQueueDidRequestOperations:(id)arg1;

@end