#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ElasticTranscoderActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class ElasticTranscoderActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ElasticTranscoderActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::ElasticTranscoderActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::ElasticTranscoderActionIdentifiers*
class CORDL_TYPE ElasticTranscoderActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllElasticTranscoderActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllElasticTranscoderActions,
                             put = setStaticF_AllElasticTranscoderActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllElasticTranscoderActions;

  /// @brief Field CancelJob, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CancelJob, put = setStaticF_CancelJob))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CancelJob;

  /// @brief Field CreateJob, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateJob, put = setStaticF_CreateJob))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateJob;

  /// @brief Field CreatePipeline, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreatePipeline, put = setStaticF_CreatePipeline))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreatePipeline;

  /// @brief Field CreatePreset, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreatePreset, put = setStaticF_CreatePreset))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreatePreset;

  /// @brief Field DeletePipeline, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeletePipeline, put = setStaticF_DeletePipeline))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeletePipeline;

  /// @brief Field DeletePreset, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeletePreset, put = setStaticF_DeletePreset))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeletePreset;

  /// @brief Field ListJobsByPipeline, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListJobsByPipeline, put = setStaticF_ListJobsByPipeline))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListJobsByPipeline;

  /// @brief Field ListJobsByStatus, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListJobsByStatus, put = setStaticF_ListJobsByStatus))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListJobsByStatus;

  /// @brief Field ListPipelines, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListPipelines, put = setStaticF_ListPipelines))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListPipelines;

  /// @brief Field ListPresets, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListPresets, put = setStaticF_ListPresets))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListPresets;

  /// @brief Field ReadJob, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ReadJob, put = setStaticF_ReadJob))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ReadJob;

  /// @brief Field ReadPipeline, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ReadPipeline, put = setStaticF_ReadPipeline))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ReadPipeline;

  /// @brief Field ReadPreset, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ReadPreset, put = setStaticF_ReadPreset))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ReadPreset;

  /// @brief Field TestRole, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TestRole, put = setStaticF_TestRole))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* TestRole;

  /// @brief Field UpdatePipeline, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdatePipeline, put = setStaticF_UpdatePipeline))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdatePipeline;

  /// @brief Field UpdatePipelineNotifications, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdatePipelineNotifications,
                             put = setStaticF_UpdatePipelineNotifications))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdatePipelineNotifications;

  /// @brief Field UpdatePipelineStatus, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdatePipelineStatus, put = setStaticF_UpdatePipelineStatus))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdatePipelineStatus;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllElasticTranscoderActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CancelJob();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateJob();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreatePipeline();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreatePreset();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeletePipeline();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeletePreset();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListJobsByPipeline();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListJobsByStatus();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListPipelines();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListPresets();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ReadJob();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ReadPipeline();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ReadPreset();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_TestRole();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdatePipeline();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdatePipelineNotifications();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdatePipelineStatus();

  static inline void setStaticF_AllElasticTranscoderActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CancelJob(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateJob(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreatePipeline(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreatePreset(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeletePipeline(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeletePreset(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListJobsByPipeline(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListJobsByStatus(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListPipelines(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListPresets(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ReadJob(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ReadPipeline(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ReadPreset(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_TestRole(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdatePipeline(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdatePipelineNotifications(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdatePipelineStatus(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElasticTranscoderActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ElasticTranscoderActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElasticTranscoderActionIdentifiers(ElasticTranscoderActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElasticTranscoderActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElasticTranscoderActionIdentifiers(ElasticTranscoderActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ElasticTranscoderActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ElasticTranscoderActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ElasticTranscoderActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers",
                       "ElasticTranscoderActionIdentifiers");
