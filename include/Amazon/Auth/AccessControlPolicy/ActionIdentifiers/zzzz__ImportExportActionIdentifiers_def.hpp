#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ImportExportActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class ImportExportActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ImportExportActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::ImportExportActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::ImportExportActionIdentifiers*
class CORDL_TYPE ImportExportActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllImportExportActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllImportExportActions, put = setStaticF_AllImportExportActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllImportExportActions;

  /// @brief Field CancelJob, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CancelJob, put = setStaticF_CancelJob))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CancelJob;

  /// @brief Field CreateJob, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateJob, put = setStaticF_CreateJob))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateJob;

  /// @brief Field GetStatus, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetStatus, put = setStaticF_GetStatus))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetStatus;

  /// @brief Field ListJobs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListJobs, put = setStaticF_ListJobs))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListJobs;

  /// @brief Field UpdateJob, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateJob, put = setStaticF_UpdateJob))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateJob;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllImportExportActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CancelJob();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateJob();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetStatus();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListJobs();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateJob();

  static inline void setStaticF_AllImportExportActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CancelJob(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateJob(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetStatus(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListJobs(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateJob(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImportExportActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImportExportActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImportExportActionIdentifiers(ImportExportActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImportExportActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImportExportActionIdentifiers(ImportExportActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ImportExportActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ImportExportActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ImportExportActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "ImportExportActionIdentifiers");
