#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ElasticBeanstalkActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class ElasticBeanstalkActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ElasticBeanstalkActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::ElasticBeanstalkActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::ElasticBeanstalkActionIdentifiers*
class CORDL_TYPE ElasticBeanstalkActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllElasticBeanstalkActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllElasticBeanstalkActions,
                             put = setStaticF_AllElasticBeanstalkActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllElasticBeanstalkActions;

  /// @brief Field CheckDNSAvailability, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CheckDNSAvailability, put = setStaticF_CheckDNSAvailability))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CheckDNSAvailability;

  /// @brief Field CreateApplication, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateApplication, put = setStaticF_CreateApplication))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateApplication;

  /// @brief Field CreateApplicationVersion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateApplicationVersion, put = setStaticF_CreateApplicationVersion))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateApplicationVersion;

  /// @brief Field CreateConfigurationTemplate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateConfigurationTemplate,
                             put = setStaticF_CreateConfigurationTemplate))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateConfigurationTemplate;

  /// @brief Field CreateEnvironment, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateEnvironment, put = setStaticF_CreateEnvironment))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateEnvironment;

  /// @brief Field CreateStorageLocation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateStorageLocation, put = setStaticF_CreateStorageLocation))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateStorageLocation;

  /// @brief Field DeleteApplication, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteApplication, put = setStaticF_DeleteApplication))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteApplication;

  /// @brief Field DeleteApplicationVersion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteApplicationVersion, put = setStaticF_DeleteApplicationVersion))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteApplicationVersion;

  /// @brief Field DeleteConfigurationTemplate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteConfigurationTemplate,
                             put = setStaticF_DeleteConfigurationTemplate))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteConfigurationTemplate;

  /// @brief Field DeleteEnvironmentConfiguration, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteEnvironmentConfiguration,
                             put = setStaticF_DeleteEnvironmentConfiguration))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteEnvironmentConfiguration;

  /// @brief Field DescribeApplicationVersions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeApplicationVersions,
                             put = setStaticF_DescribeApplicationVersions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeApplicationVersions;

  /// @brief Field DescribeApplications, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeApplications, put = setStaticF_DescribeApplications))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeApplications;

  /// @brief Field DescribeConfigurationOptions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeConfigurationOptions,
                             put = setStaticF_DescribeConfigurationOptions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeConfigurationOptions;

  /// @brief Field DescribeConfigurationSettings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeConfigurationSettings,
                             put = setStaticF_DescribeConfigurationSettings))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeConfigurationSettings;

  /// @brief Field DescribeEnvironmentResources, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeEnvironmentResources,
                             put = setStaticF_DescribeEnvironmentResources))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeEnvironmentResources;

  /// @brief Field DescribeEnvironments, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeEnvironments, put = setStaticF_DescribeEnvironments))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeEnvironments;

  /// @brief Field DescribeEvents, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeEvents, put = setStaticF_DescribeEvents))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeEvents;

  /// @brief Field ListAvailableSolutionStacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListAvailableSolutionStacks,
                             put = setStaticF_ListAvailableSolutionStacks))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListAvailableSolutionStacks;

  /// @brief Field RebuildEnvironment, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RebuildEnvironment, put = setStaticF_RebuildEnvironment))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RebuildEnvironment;

  /// @brief Field RequestEnvironmentInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RequestEnvironmentInfo, put = setStaticF_RequestEnvironmentInfo))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RequestEnvironmentInfo;

  /// @brief Field RestartAppServer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RestartAppServer, put = setStaticF_RestartAppServer))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RestartAppServer;

  /// @brief Field RetrieveEnvironmentInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RetrieveEnvironmentInfo, put = setStaticF_RetrieveEnvironmentInfo))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RetrieveEnvironmentInfo;

  /// @brief Field SwapEnvironmentCNAMEs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SwapEnvironmentCNAMEs, put = setStaticF_SwapEnvironmentCNAMEs))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SwapEnvironmentCNAMEs;

  /// @brief Field TerminateEnvironment, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TerminateEnvironment, put = setStaticF_TerminateEnvironment))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* TerminateEnvironment;

  /// @brief Field UpdateApplication, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateApplication, put = setStaticF_UpdateApplication))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateApplication;

  /// @brief Field UpdateApplicationVersion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateApplicationVersion, put = setStaticF_UpdateApplicationVersion))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateApplicationVersion;

  /// @brief Field UpdateConfigurationTemplate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateConfigurationTemplate,
                             put = setStaticF_UpdateConfigurationTemplate))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateConfigurationTemplate;

  /// @brief Field UpdateEnvironment, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateEnvironment, put = setStaticF_UpdateEnvironment))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateEnvironment;

  /// @brief Field ValidateConfigurationSettings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ValidateConfigurationSettings,
                             put = setStaticF_ValidateConfigurationSettings))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ValidateConfigurationSettings;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllElasticBeanstalkActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CheckDNSAvailability();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateApplication();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateApplicationVersion();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateConfigurationTemplate();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateEnvironment();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateStorageLocation();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteApplication();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteApplicationVersion();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteConfigurationTemplate();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteEnvironmentConfiguration();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeApplicationVersions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeApplications();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeConfigurationOptions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeConfigurationSettings();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeEnvironmentResources();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeEnvironments();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeEvents();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListAvailableSolutionStacks();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RebuildEnvironment();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RequestEnvironmentInfo();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RestartAppServer();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RetrieveEnvironmentInfo();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SwapEnvironmentCNAMEs();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_TerminateEnvironment();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateApplication();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateApplicationVersion();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateConfigurationTemplate();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateEnvironment();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ValidateConfigurationSettings();

  static inline void setStaticF_AllElasticBeanstalkActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CheckDNSAvailability(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateApplication(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateApplicationVersion(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateConfigurationTemplate(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateEnvironment(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateStorageLocation(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteApplication(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteApplicationVersion(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteConfigurationTemplate(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteEnvironmentConfiguration(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeApplicationVersions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeApplications(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeConfigurationOptions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeConfigurationSettings(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeEnvironmentResources(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeEnvironments(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeEvents(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListAvailableSolutionStacks(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RebuildEnvironment(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RequestEnvironmentInfo(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RestartAppServer(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RetrieveEnvironmentInfo(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SwapEnvironmentCNAMEs(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_TerminateEnvironment(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateApplication(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateApplicationVersion(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateConfigurationTemplate(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateEnvironment(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ValidateConfigurationSettings(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElasticBeanstalkActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ElasticBeanstalkActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElasticBeanstalkActionIdentifiers(ElasticBeanstalkActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElasticBeanstalkActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElasticBeanstalkActionIdentifiers(ElasticBeanstalkActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ElasticBeanstalkActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ElasticBeanstalkActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ElasticBeanstalkActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers",
                       "ElasticBeanstalkActionIdentifiers");
