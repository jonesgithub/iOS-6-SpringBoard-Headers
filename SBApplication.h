/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

#import "SBDisplayProtocol-Protocol.h"
#import "SBSystemLocalNotificationAlertDelegate-Protocol.h"

@class BKSCFBundle, BKSMachSendRight, BKSProcessAssertion, NSArray, NSDate, NSDictionary, NSHashTable, NSMapTable, NSMutableSet, NSSet, NSString, NSTimer, PCPersistentTimer, SBActivationContext, SBAppContextHostManager, SBDefaultImageInfo, UIColor, UILocalNotification, UIRemoteApplication;

@interface SBApplication : NSObject <SBSystemLocalNotificationAlertDelegate, SBDisplayProtocol>
{
    NSString *_bundleIdentifier;
    NSString *_displayIdentifier;
    NSString *_path;
    NSString *_bundleVersion;
    NSArray *_defaultImageNames;
    NSArray *_folderNames;
    NSString *_fallbackFolderName;
    NSDictionary *_searchDomainLaunchInfo;
    BKSCFBundle *_cachedBundle;
    BKSMachSendRight *_xpcEventPort;
    int _activationState;
    int _lastExitType;
    double _modificationDate;
    int _pid;
    SBAppContextHostManager *_contextHostManager;
    NSString *_displayName;
    NSArray *_tags;
    UIRemoteApplication *_remoteApplication;
    NSString *_sandboxPath;
    NSString *_signerIdentity;
    unsigned int _monitoringLocaleAndTimeChanges:1;
    NSSet *_alertSuppressionContexts;
    unsigned int _doingBackgroundNetworking:16;
    unsigned int _failedLaunchCount:8;
    unsigned int _provisioningProfileValidated:1;
    unsigned int _enabled:1;
    unsigned int _isSystemApplication:1;
    unsigned int _isSystemProvisioningApplication:1;
    unsigned int _hasMiniAlerts:1;
    unsigned int _dataFlagsIsSet:1;
    unsigned int _isGameCenterEnabled:1;
    unsigned int _wasGameCenterEverEnabled:1;
    unsigned int _supportsAudioBackgroundMode:1;
    unsigned int _supportsLocationBackgroundMode:1;
    unsigned int _supportsVOIPBackgroundMode:1;
    unsigned int _supportsEABackgroundMode:1;
    unsigned int _supportsContinuousBackgroundMode:1;
    unsigned int _wantsUnboundedTaskCompletionAssertions:1;
    unsigned int _prefersSavedSnapshots:1;
    unsigned int _suspendingUnsupported;
    unsigned int _hasBeenFrontmost:1;
    unsigned int _requiresHiDPI:1;
    unsigned int _supportsPortraitOrientation:1;
    unsigned int _supportsPortraitUpsideDownOrientation:1;
    unsigned int _supportsLandscapeLeftOrientation:1;
    unsigned int _supportsLandscapeRightOrientation:1;
    unsigned int _shouldDisableMallocCorruptionAbort:1;
    unsigned int _terminationAssertions:8;
    unsigned int _terminationAssertionsForCacheCleaning:8;
    int _supportedTypes;
    int _isClassic;
    BOOL _runningInClassicMode;
    BOOL _calculatedSupportedTypes;
    BOOL _hasViewServiceEntitlement;
    unsigned int _defaultStatusBarStyle:8;
    BOOL _defaultStatusBarHidden;
    UIColor *_defaultStatusBarTintColor;
    unsigned int _defaultInterfaceOrientation:8;
    unsigned int _defaultInterfaceOrientationOverride:8;
    unsigned int _interfaceOrientationOverrideSet:1;
    unsigned int _sbUsesNetwork:8;
    unsigned int _dataFlags:8;
    unsigned int _hasShownDataPlanAlertSinceLock:1;
    unsigned int _launchAlerts:8;
    unsigned int _uninstalled:1;
    unsigned int _isLaunchableDuringSetup:1;
    int _ratingRank;
    Class _iconClass;
    NSArray *_customMachServices;
    NSArray *_externalAccessoryProtocols;
    NSDictionary *_customSpotlightIconPaths;
    NSMutableSet *_requireLocalNotificationsCachingReasons;
    NSArray *_cachedLocalNotifications;
    unsigned int _applicationState;
    struct _opaque_pthread_mutex_t /*{
        long __sig;
        char __opaque[40];
    } */_appBundleMutex;
    NSDate *_nextApplicationWakeDate;
    PCPersistentTimer *_applicationWakeTimer;
    PCPersistentTimer *_localNotificationTimer;
    UILocalNotification *_pendingLocalNotification;
    BKSProcessAssertion *_transientProcessAssertion;
    NSTimer *_transientSuspendTimer;
    int _transientAssertionType;
    BKSProcessAssertion *_periodicWakeProcessAssertion;
    NSTimer *_periodicWakeSuspendTimer;
    BKSProcessAssertion *_simpleRemoteActionProcessAssertion;
    int _activationCount;
    NSMapTable *_displayValues;
    NSMapTable *_activationValues;
    NSMapTable *_deactivationValues;
    NSHashTable *_displayFlags;
    NSHashTable *_activationFlags;
    NSHashTable *_deactivationFlags;
    unsigned int _defaultImageInfoCount;
    SBDefaultImageInfo *_defaultImageInfo;
    NSMutableSet *_suppressVolumeHudCategories;
    float _accelerometerSampleInterval;
    NSMutableSet *_idleTimerDisabledReasons;
    unsigned int _expectsFaceContact:1;
    unsigned int _expectsFaceContactInLandscape:1;
    unsigned int _orientationChangedEventsEnabled:1;
    unsigned int _proximityEventsEnabled:1;
    unsigned int _isBeingDebugged:1;
    unsigned int _isRunning:1;
    unsigned int _isAnimatingActivation:1;
    unsigned int _isAnimatingDeactivation:1;
    unsigned int _showsProgress;
    int _applicationRestorationCheckState;
    float _minimumBrightnessLevel;
    NSArray *_domainsToPreheat;
}

+ (id)defaultValueForKey:(id)arg1 displayIdentifier:(id)arg2 urlScheme:(id)arg3;
+ (void)setDefaultValue:(id)arg1 forKey:(id)arg2 displayIdentifier:(id)arg3;
+ (id)_defaultDisplayState;
+ (void)flushLaunchAlertsOfType:(int)arg1;
+ (BOOL)activationStateIsTransitory:(int)arg1;
+ (void)initialize;
+ (void)removeCachedSnapshotsMatchingPath:(id)arg1;
+ (void)removeCachedSnapshotSurface:(void *)arg1 forPath:(id)arg2;
+ (void)setCachedSnapshotSurface:(void *)arg1 forPath:(id)arg2;
+ (void *)cachedSnapshotSurfaceForPath:(id)arg1;
+ (id)systemSnapshotsDirectory;
@property(retain, nonatomic) BKSMachSendRight *xpcEventPort; // @synthesize xpcEventPort=_xpcEventPort;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(copy) NSString *displayIdentifier; // @synthesize displayIdentifier=_displayIdentifier;
- (id)domainsToPreheat;
- (id)deactivationSettingsDescription;
- (id)descriptionForDeactivationSetting:(unsigned int)arg1;
- (id)activationSettingsDescription;
- (id)descriptionForActivationSetting:(unsigned int)arg1;
- (id)displaySettingsDescription;
- (id)descriptionForDisplaySetting:(unsigned int)arg1;
- (id)description;
- (id)deactivationSettings;
- (id)activationSettings;
- (id)launchSettings;
- (unsigned int)eventPort;
- (BOOL)hasStartedLaunching;
- (BOOL)isRunning;
- (BOOL)isRecordingAudio;
- (BOOL)suppressesNotifications;
- (float)minimumBrightnessLevel;
- (BOOL)showSystemVolumeHUDForCategory:(id)arg1;
- (void)setSystemVolumeHUDEnabled:(BOOL)arg1 forCategory:(id)arg2;
- (BOOL)showsProgress;
- (void)setShowsProgress:(BOOL)arg1;
- (BOOL)proximityEventsEnabled;
- (void)setProximityEventsEnabled:(BOOL)arg1;
- (BOOL)orientationChangedEventsEnabled;
- (void)setOrientationChangedEventsEnabled:(BOOL)arg1;
- (double)accelerometerSampleInterval;
- (void)setAccelerometerSampleInterval:(double)arg1;
- (BOOL)expectsFaceContactInLandscape;
- (BOOL)expectsFaceContact;
- (void)setExpectsFaceContact:(BOOL)arg1 inLandscape:(BOOL)arg2;
- (void)deactivate;
- (void)activate;
- (void)setExpectsFaceContact:(BOOL)arg1;
- (id)idleTimerDisabledReasons;
- (void)setIdleTimerDisabled:(BOOL)arg1 forReason:(id)arg2;
- (int)effectiveStatusBarStyle;
- (int)resolvedStatusBarStyle;
- (int)launchingInterfaceOrientationForCurrentOrientation;
- (int)statusBarOrientation;
- (BOOL)statusBarHidden;
- (BOOL)allowsEventOnlySuspension;
- (BOOL)deactivationFlag:(unsigned int)arg1;
- (id)deactivationValue:(unsigned int)arg1;
- (void)setDeactivationSetting:(unsigned int)arg1 value:(id)arg2;
- (void)setDeactivationSetting:(unsigned int)arg1 flag:(BOOL)arg2;
- (void)clearDeactivationSettings;
- (void)_bumpActivationCountBy:(int)arg1;
- (id)_deactivationFlags;
- (id)_deactivationValues;
- (void)markUserLaunchInitiationTime;
- (BOOL)activationFlag:(unsigned int)arg1;
- (id)activationValue:(unsigned int)arg1;
- (void)setActivationSetting:(unsigned int)arg1 value:(id)arg2;
- (void)setActivationSetting:(unsigned int)arg1 flag:(BOOL)arg2;
- (void)clearActivationSettings;
- (id)_activationFlags;
- (id)_activationValues;
- (BOOL)displayFlag:(unsigned int)arg1;
- (id)displayValue:(unsigned int)arg1;
- (void)setDisplaySetting:(unsigned int)arg1 value:(id)arg2;
- (void)setDisplaySetting:(unsigned int)arg1 flag:(BOOL)arg2;
- (void)clearDisplaySettings;
@property(copy, nonatomic) SBActivationContext *activationContext;
- (id)_newFlagTable;
- (id)_newValueTable;
- (id)urlScheme;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)defaultImagePathForCurrentOrientationWithName:(id)arg1;
- (id)_currentDefaultPNGName;
- (BOOL)_applicationDoesNotHaveRestorationArchive;
- (void)_suspendForPeriodicWakeTimerFired:(id)arg1;
- (void)_dropPeriodicWakeProcessAssertion;
- (void)_resumeForPeriodicWakeWithReason:(id)arg1;
- (id)_localizedGenreFromDictionary:(id)arg1;
- (id)_localizedGenreNameForID:(int)arg1;
- (id)_copyApplicationMetadata;
- (void)_dropTransientProcessAssertion;
- (void)_cancelProcessAssertionForSimpleRemoteAction;
- (void)sendSimpleRemoteAction:(int)arg1;
- (void)takeAssertionWithTimeoutForSimpleRemoteAction;
- (void)setNowPlayingWithAudio:(BOOL)arg1;
- (void)_transientSuspendForTimerFired:(id)arg1;
- (void)_transientResumeForType:(int)arg1;
- (double)_resumeDurationForTransientType:(int)arg1;
- (id)_transientIdentifier;
- (void)resumeForContentAvailable;
- (void)resumeToQuit;
- (void)notifyResumeActiveForReason:(int)arg1;
- (void)notifyResignActiveForReason:(int)arg1;
- (void)decrementTerminationAssertionCountForReason:(unsigned char)arg1;
- (void)incrementTerminationAssertionCountForReason:(unsigned char)arg1;
- (BOOL)isCacheCleaningTerminationAssertionHeld;
- (BOOL)isAnyTerminationAssertionHeld;
- (void)resetLaunchAlertForType:(int)arg1;
- (BOOL)showLaunchAlertForType:(int)arg1;
- (void)_purgeRemoteApplication;
- (id)remoteApplication;
- (void)prepareForUninstallation;
- (id)externalAccessoryProtocols;
- (BOOL)provisioningProfileValidated;
- (void)markApplicationIdentityAsTrusted;
- (id)_expirationDateForProvisioningProfile;
- (BOOL)_doesProfileMatchSignerIdentity:(struct _MISProfile *)arg1;
- (BOOL)_signatureNeedsExplicitUserTrust;
- (int)applicationSignatureState;
- (id)signerIdentity;
- (BOOL)wantsUnboundedTaskCompletionAssertions;
- (BOOL)supportsContinuousBackgroundMode;
- (BOOL)supportsEABackgroundMode;
- (BOOL)supportsVOIPBackgroundMode;
- (BOOL)supportsLocationBackgroundMode;
- (BOOL)supportsAudioBackgroundMode;
- (int)activationState;
- (void)_calculateSupportedTypesFromInfoDictionary:(id)arg1;
- (void)_sendDidLaunchNotification:(BOOL)arg1;
- (void)_setActivationState:(int)arg1;
- (id)_activationStateToString;
- (id)_stringForActivationState:(int)arg1;
- (void)setHasBeenFrontmost:(BOOL)arg1;
- (BOOL)hasBeenFrontmost;
- (unsigned int)applicationState;
- (void)setApplicationState:(unsigned int)arg1;
- (id)preferenceDomain;
- (id)sandboxPath;
- (void)setSandboxPath:(id)arg1;
- (void)_unregisterRemoteViewsAndSheets;
- (void)hideContextHostViewForRequester:(id)arg1;
- (void)setContextHostManager:(id)arg1;
- (void)_setContextHostManager:(id)arg1;
- (void)clearContextHostManager;
- (void)_clearContextHostManager;
- (id)contextHostManager;
- (void)disableContextHostingForRequester:(id)arg1;
- (void)enableContextHostingForLowPriorityRequester:(id)arg1;
- (void)enableContextHostingForRequester:(id)arg1 orderFront:(BOOL)arg2;
- (id)contextHostViewForRequester:(id)arg1 enableAndOrderFront:(BOOL)arg2;
- (id)contextHostViewForRequester:(id)arg1;
- (BOOL)isContextHostingEnabled;
- (void)_purgeCachedLocalNotifications;
- (id)getPendingLocalNotification;
- (void)systemLocalNotificationAlertShouldSnooze:(id)arg1 forApplication:(id)arg2;
- (void)systemLocalNotificationAlertShouldLaunch:(id)arg1 forApplication:(id)arg2;
- (void)_fireNotification:(id)arg1;
- (void)localNotificationTimerFired;
- (void)_updateLocalNotificationTimers;
- (void)_setMonitoringForLocaleAndTimeChanges:(BOOL)arg1;
- (id)_lastLocalNotificationFireDate;
- (void)_setLastLocalNotificationFireDate:(id)arg1;
- (void)_dismissAllSystemLocalNotificationAlerts;
- (BOOL)badgeHasBeenSetLocally;
- (void)noteBadgeSetLocally;
- (BOOL)usesLocalNotifications;
- (void)cancelLocalNotification:(id)arg1;
- (void)scheduleLocalNotifications:(id)arg1 replaceExistingNotifications:(BOOL)arg2;
- (id)scheduledLocalNotifications;
- (void)_setPendingLocalNotificationFromBulletin:(id)arg1;
- (id)_copyUnexpiredScheduledLocalNotifications;
- (void)_setScheduledLocalNotifications:(id)arg1;
- (id)_scheduledLocalNotifications;
- (void)_endRequireLocalNotificationsCachingWithReason:(id)arg1;
- (void)_beginRequireLocalNotificationsCachingWithReason:(id)arg1;
- (void)_setupLocalNotificationLogging;
- (id)loggingIdentifier;
- (void)noteDidOpenURL:(id)arg1;
- (void)spdResumeForTrafficRequested;
- (void)wakeTimerFired;
- (void)_updateApplicationWakeTimers;
- (void)setApplicationNextWakeDate:(id)arg1;
- (id)applicationNextWakeDate;
- (BOOL)classicDefaultStatusBarHidden;
- (BOOL)classicAppZoomedInOrRequiresHiDPI;
- (BOOL)classicAppRequiresHiDPI;
- (BOOL)classicAppZoomedIn;
- (BOOL)supportsApplicationType:(int)arg1;
- (void)_setIsClassic:(BOOL)arg1;
- (BOOL)isClassic;
- (void)_calculateSupportedTypesLazilyIfNecessary;
- (int)_launchingInterfaceOrientationForOrientation:(int)arg1;
- (void)removeDefaultInterfaceOrientationOverride;
- (void)overrideDefaultInterfaceOrientation:(int)arg1;
- (void)_notifyOfStatusBarTintOverride:(BOOL)arg1 withColor:(id)arg2;
- (id)statusBarTintColor;
- (BOOL)defaultStatusBarHidden;
- (int)defaultStatusBarStyle;
- (int)statusBarStyle;
- (void)autoLaunchIfNecessaryOnBootOrInstall:(BOOL)arg1;
- (BOOL)shouldAutoRelaunchAfterExit;
- (BOOL)shouldAutoLaunchOnBootOrInstall;
- (BOOL)_shouldAutoLaunchOnBootOrInstall:(BOOL)arg1;
- (BOOL)_shouldAutoRelaunchForEA;
- (void)_setAutoLaunchForVoIP:(BOOL)arg1;
- (void)_setHasBeenLaunched;
- (void)markNewlyInstalled;
- (BOOL)isNewlyInstalled;
- (BOOL)_shouldAutoLaunchForVoIP;
- (void)didAnimateDeactivation;
- (void)willAnimateDeactivation;
- (void)didAnimateActivation;
- (void)willAnimateActivation;
- (void)didDeactivateForEventsOnly:(BOOL)arg1;
- (void)willDeactivateForEventsOnly:(BOOL)arg1;
- (void)didFailToActivate;
- (void)didActivate;
- (void)_updateOrientationForActivationIfNecessary;
- (void)willActivate;
- (void)didSuspend;
- (void)didExitWithInfo:(id)arg1 type:(int)arg2;
- (void)didLaunch:(id)arg1;
- (void)didBeginLaunch:(id)arg1;
- (void)setRunning:(BOOL)arg1;
- (void)setProcessInfo:(id)arg1;
- (void)_setRunning:(BOOL)arg1;
- (void)_setProcessInfo:(id)arg1;
- (id)fallbackFolderName;
- (id)folderNames;
- (int)ratingRank;
- (BOOL)isBeingDebugged;
- (void)setBeingDebugged:(BOOL)arg1;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
- (Class)iconClass;
- (id)_preferredImagePathInBundle:(id)arg1 baseResourceName:(id)arg2 ofType:(id)arg3 scale:(float *)arg4;
- (id)_preferredImagePathByScaleInBundle:(id)arg1 resourceName:(id)arg2 ofType:(id)arg3 scale:(float *)arg4;
- (id)_newDefaultImageInfoForLaunchingOrientation:(int)arg1 scale:(float)arg2;
- (id)_defaultImageInfoForLaunchingOrientation:(int)arg1 scale:(float)arg2;
- (id)defaultImage:(char *)arg1 preferredScale:(float)arg2 originalOrientation:(int *)arg3 currentOrientation:(int *)arg4 canUseIOSurface:(BOOL)arg5;
- (id)defaultImage:(char *)arg1 preferredScale:(float)arg2 originalOrientation:(int *)arg3 currentOrientation:(int *)arg4;
- (BOOL)isSnapshotPresentForLaunchingInterfaceOrientation:(int)arg1;
- (id)_dynamicSnapshotSuffixForScale:(float)arg1;
- (BOOL)_useLosslessSnapshotsForScale:(float)arg1;
- (id)_pathIfFileExistsAtPath:(id)arg1;
- (id)_additionalDisplayQualification;
- (BOOL)shouldLaunchPNGless;
- (void)flushSnapshots;
- (id)appSnapshotPath;
- (id)customSpotlightIconPathsForKey:(id)arg1;
//- (void)validateSystemProvisioningEntitlements:(CDStruct_6ad76789 *)arg1;
- (BOOL)isLaunchableDuringSetup;
- (BOOL)hasGameCenterData;
- (BOOL)isNowRecordingApplication;
- (id)webClip;
- (BOOL)isWebApplication;
- (BOOL)isMobilePhone;
- (BOOL)isSystemProvisioningApplication;
- (BOOL)isInternalApplication;
- (BOOL)isSystemApplication;
- (void)_resetDataUsage;
- (void)setUsesWiFiNetwork:(BOOL)arg1;
- (void)setUsesEdgeNetwork:(BOOL)arg1;
- (void)_setDoingBackgroundNetworking:(unsigned int)arg1;
- (unsigned int)_doingBackgroundNetworking;
- (void)setUsesBackgroundNetwork:(BOOL)arg1;
- (void)_setDataUsage:(int)arg1;
- (void)setHasShownDataPlanAlertSinceLock:(BOOL)arg1;
- (BOOL)hasShownDataPlanAlertSinceLock;
- (int)dataUsage;
- (void)setAlertSuppressionContexts:(id)arg1;
- (id)alertSuppressionContexts;
- (void)setHasMiniAlerts:(BOOL)arg1;
- (BOOL)hasMiniAlerts;
- (id)tags;
- (void)setTags:(id)arg1;
- (BOOL)suspendingUnsupported;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (id)bundleVersion;
- (void)purgeAllCaches;
- (void)purgeBundleCaches;
- (id)bundle;
- (double)modificationDate;
- (id)containerPath;
- (id)path;
- (id)bundleIdentifier;
- (BOOL)isSameExecutableAsApplication:(id)arg1;
- (void)dealloc;
- (double)autoLockTime;
- (double)autoDimTime;
- (BOOL)_idleTimerDisabledForAnyReason;
- (id)initWithBundleIdentifier:(id)arg1 webClip:(id)arg2 path:(id)arg3 bundle:(id)arg4 infoDictionary:(id)arg5 isSystemApplication:(BOOL)arg6 signerIdentity:(id)arg7 provisioningProfileValidated:(BOOL)arg8;
- (void)_configureDisplayNameForInfoDictionary:(id)arg1 atBundlePath:(id)arg2;
- (BOOL)isNewsstandApplication;
- (void)_flushDefaultImageInfo;
- (void)_endDefaultImageAccess;
- (void)_beginDefaultImageAccess;
- (id)_defaultPNGForLaunchingOrientation:(int)arg1 scale:(float)arg2 orientation:(int *)arg3;
- (id)_defaultPNGPathForLaunchingOrientation:(int)arg1 scale:(float)arg2 imageOrientation:(int *)arg3 resultingScale:(float *)arg4;
- (id)_snapshotImageForLaunchingOrientation:(int)arg1 scale:(float)arg2 originalOrientation:(int *)arg3 currentOrientation:(int *)arg4;
- (id)_imageNamesForDefaultPNG;
- (void)_addImageName:(id)arg1 toImageNamesArray:(id)arg2;
- (id)_cachedImageForSnapshotPath:(id)arg1;
- (id)_imageForSnapshotAtPath:(id)arg1 fileOrientation:(int *)arg2;
- (id)_defaultPNGOverrideName;
- (id)_defaultImageName;
- (id)_scaleSuffixForScale:(float)arg1;
- (int)_fallbackImageOrientationForLaunchingOrientation:(int)arg1;
- (id)_fallbackOrientationImageTagForLaunchingOrientation:(int)arg1;
- (id)_orientationImageTagForLaunchingOrientation:(int)arg1;
- (void)_imageOrientationParametersForLaunchingOrientation:(int)arg1 imageTag:(id *)arg2 fallbackImageTag:(id *)arg3 fallbackOrientation:(int *)arg4;

@end

