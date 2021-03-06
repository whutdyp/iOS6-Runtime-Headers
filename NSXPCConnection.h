/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <NSObject>, NSString, NSObject<OS_dispatch_queue>, NSXPCInterface, NSXPCListenerEndpoint;

@interface NSXPCConnection : NSObject <NSXPCProxyCreating> {
    void *_xconnection;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_userQueue;
    unsigned long long _state;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _interruptionHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _invalidationHandler;

    id _exportInfo;
    id _replyInfo;
    id _importInfo;
    <NSObject> *_otherInfo;
    id _reserved1;
    id _lock;
    NSXPCInterface *_remoteObjectInterface;
    NSString *_serviceName;
    NSXPCListenerEndpoint *_endpoint;
    id _reserved2;
    id _reserved3;
}

@property(readonly) NSString * serviceName;
@property(readonly) NSXPCListenerEndpoint * endpoint;
@property(retain) NSXPCInterface * exportedInterface;
@property(retain) id exportedObject;
@property(retain) NSXPCInterface * remoteObjectInterface;
@property(copy) id interruptionHandler;
@property(copy) id invalidationHandler;
@property(readonly) int auditSessionIdentifier;
@property(readonly) int processIdentifier;
@property(readonly) unsigned int effectiveUserIdentifier;
@property(readonly) unsigned int effectiveGroupIdentifier;

+ (void)endTransaction;
+ (void)beginTransaction;
+ (id)currentConnection;

- (void)suspend;
- (void)_setUUID:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)start;
- (void)invalidate;
- (id)userInfo;
- (void)finalize;
- (id)endpoint;
- (id)initWithMachServiceName:(id)arg1;
- (void)setRemoteObjectInterface:(id)arg1;
- (id)remoteObjectInterface;
- (unsigned int)effectiveGroupIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (int)auditSessionIdentifier;
- (void)_removeProxy:(unsigned long long)arg1;
- (void)_addProxy:(unsigned long long)arg1;
- (id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(id)arg2;
- (void)setExportedInterface:(id)arg1;
- (id)exportedInterface;
- (void)setExportedObject:(id)arg1;
- (id)exportedObject;
- (id)replacementObjectForEncoder:(id)arg1 object:(id)arg2;
- (id)valueForEntitlement:(id)arg1;
- (void)setOptions:(unsigned int)arg1;
- (id)_exportTable;
- (id)serviceName;
- (id)invalidationHandler;
- (void)setInvalidationHandler:(id)arg1;
- (id)interruptionHandler;
- (void)setInterruptionHandler:(id)arg1;
- (void)_sendInvocation:(id)arg1 proxyNumber:(unsigned long long)arg2 remoteInterface:(id)arg3 withErrorHandler:(id)arg4;
- (void)_sendInvocation:(id)arg1 proxyNumber:(unsigned long long)arg2 remoteInterface:(id)arg3;
- (id)initWithEndpoint:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)_initWithPeerConnection:(id)arg1 name:(id)arg2;
- (void)_decodeAndInvokeMessageWithData:(id)arg1;
- (void)_decodeAndInvokeReplyBlockWithData:(id)arg1;
- (id)remoteObjectProxyWithErrorHandler:(id)arg1;
- (id)remoteObjectProxy;
- (void)_sendDesistForProxyNumber:(unsigned long long)arg1;
- (struct { unsigned int x1[8]; })auditToken;
- (void)_sendInvocation:(id)arg1 proxyNumber:(unsigned long long)arg2 remoteInterface:(id)arg3 withErrorHandler:(id)arg4 timeout:(double)arg5;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned int)arg2;
- (void)setUserInfo:(id)arg1;
- (void)stop;
- (void)resume;
- (int)processIdentifier;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)debugDescription;

@end
