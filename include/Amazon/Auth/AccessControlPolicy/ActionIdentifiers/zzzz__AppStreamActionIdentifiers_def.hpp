#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AppStreamActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class AppStreamActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::AppStreamActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::AppStreamActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::AppStreamActionIdentifiers*
class CORDL_TYPE AppStreamActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllAppStreamActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllAppStreamActions, put = setStaticF_AllAppStreamActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllAppStreamActions;

  /// @brief Field CreateApplication, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateApplication, put = setStaticF_CreateApplication))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateApplication;

  /// @brief Field CreateSession, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateSession, put = setStaticF_CreateSession))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateSession;

  /// @brief Field DeleteApplication, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteApplication, put = setStaticF_DeleteApplication))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteApplication;

  /// @brief Field GetApiRoot, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetApiRoot, put = setStaticF_GetApiRoot))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetApiRoot;

  /// @brief Field GetApplication, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetApplication, put = setStaticF_GetApplication))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetApplication;

  /// @brief Field GetApplicationError, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetApplicationError, put = setStaticF_GetApplicationError))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetApplicationError;

  /// @brief Field GetApplicationErrors, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetApplicationErrors, put = setStaticF_GetApplicationErrors))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetApplicationErrors;

  /// @brief Field GetApplicationStatus, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetApplicationStatus, put = setStaticF_GetApplicationStatus))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetApplicationStatus;

  /// @brief Field GetApplications, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetApplications, put = setStaticF_GetApplications))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetApplications;

  /// @brief Field GetSession, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetSession, put = setStaticF_GetSession))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetSession;

  /// @brief Field GetSessionStatus, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetSessionStatus, put = setStaticF_GetSessionStatus))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetSessionStatus;

  /// @brief Field GetSessions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetSessions, put = setStaticF_GetSessions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetSessions;

  /// @brief Field UpdateApplication, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateApplication, put = setStaticF_UpdateApplication))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateApplication;

  /// @brief Field UpdateApplicationState, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateApplicationState, put = setStaticF_UpdateApplicationState))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateApplicationState;

  /// @brief Field UpdateSessionState, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateSessionState, put = setStaticF_UpdateSessionState))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateSessionState;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllAppStreamActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateApplication();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateSession();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteApplication();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetApiRoot();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetApplication();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetApplicationError();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetApplicationErrors();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetApplicationStatus();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetApplications();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetSession();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetSessionStatus();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetSessions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateApplication();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateApplicationState();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateSessionState();

  static inline void setStaticF_AllAppStreamActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateApplication(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateSession(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteApplication(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetApiRoot(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetApplication(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetApplicationError(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetApplicationErrors(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetApplicationStatus(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetApplications(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetSession(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetSessionStatus(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetSessions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateApplication(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateApplicationState(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateSessionState(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppStreamActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppStreamActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppStreamActionIdentifiers(AppStreamActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppStreamActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppStreamActionIdentifiers(AppStreamActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::AppStreamActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::AppStreamActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::AppStreamActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "AppStreamActionIdentifiers");
