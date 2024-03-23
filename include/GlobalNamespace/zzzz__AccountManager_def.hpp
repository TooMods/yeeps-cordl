#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AWSDatabase_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AccountManager)
namespace GlobalNamespace {
class AccountData;
}
namespace GlobalNamespace {
struct OculusAccountData;
}
namespace GlobalNamespace {
class Room;
}
namespace GlobalNamespace {
struct __AWSDatabase__DynamoResponse;
}
namespace GlobalNamespace {
struct __AWSDatabase__LambdaResponse;
}
namespace GlobalNamespace {
struct __AccountData__BanType;
}
namespace GlobalNamespace {
class __AccountManager__OnAccountDataLoaded;
}
namespace GlobalNamespace {
class __AccountManager__OnBanned;
}
namespace GlobalNamespace {
class __AccountManager__OnBundlePurchaseFailure;
}
namespace GlobalNamespace {
class __AccountManager__OnBundlePurchaseSuccess;
}
namespace GlobalNamespace {
class __AccountManager__OnCurrencyAddedFailure;
}
namespace GlobalNamespace {
class __AccountManager__OnCurrencyAddedSuccess;
}
namespace GlobalNamespace {
class __AccountManager__OnCurrencyResetFailure;
}
namespace GlobalNamespace {
class __AccountManager__OnCurrencyResetSuccess;
}
namespace GlobalNamespace {
class __AccountManager__OnFetchAccountDataFailed;
}
namespace GlobalNamespace {
class __AccountManager__OnFetchAccountDataSuccess;
}
namespace GlobalNamespace {
class __AccountManager__OnItemsResetFailure;
}
namespace GlobalNamespace {
class __AccountManager__OnItemsResetSuccess;
}
namespace GlobalNamespace {
class __AccountManager__OnLinkedToMobileAccount;
}
namespace GlobalNamespace {
class __AccountManager__OnMobileAccountLinkFailed;
}
namespace GlobalNamespace {
class __AccountManager__OnMobileAccountLinkSuccess;
}
namespace GlobalNamespace {
class __AccountManager__OnMobileCodeResetFailed;
}
namespace GlobalNamespace {
class __AccountManager__OnMobileCodeResetSuccess;
}
namespace GlobalNamespace {
class __AccountManager__OnPurchaseFailure;
}
namespace GlobalNamespace {
class __AccountManager__OnPurchaseItemSuccess;
}
namespace GlobalNamespace {
class __AccountManager__OnPurchaseSuccess;
}
namespace GlobalNamespace {
class __AccountManager__OnUserIDAssigned;
}
namespace GlobalNamespace {
class __AccountManager__OnValidateMobileAccountFailed;
}
namespace GlobalNamespace {
class __AccountManager__OnValidateMobileAccountSuccess;
}
namespace GlobalNamespace {
struct __AccountManager___AddCurrencyToDatabase_d__106;
}
namespace GlobalNamespace {
struct __AccountManager___CheckGameCompatability_d__58;
}
namespace GlobalNamespace {
struct __AccountManager___CheckGuestGameAccess_d__57;
}
namespace GlobalNamespace {
struct __AccountManager___LinkMobileAccount_d__70;
}
namespace GlobalNamespace {
struct __AccountManager___LogIntoAccount_d__53;
}
namespace GlobalNamespace {
struct __AccountManager___LogIntoMobileAccount_d__54;
}
namespace GlobalNamespace {
struct __AccountManager___LoginAsMobile_d__48;
}
namespace GlobalNamespace {
struct __AccountManager___ResetCurrencyToDatabase_d__117;
}
namespace GlobalNamespace {
struct __AccountManager___ResetMobileCode_d__78;
}
namespace GlobalNamespace {
struct __AccountManager___ResetOwnedItemsToDatabase_d__120;
}
namespace GlobalNamespace {
struct __AccountManager___SaveQueuedActiveCosmeticsToDatabase_d__96;
}
namespace GlobalNamespace {
struct __AccountManager___SkipLoginWithGuestAccount_d__49;
}
namespace GlobalNamespace {
struct __AccountManager___TryExpandPrivateWorld_d__102;
}
namespace GlobalNamespace {
struct __AccountManager___TryPurchaseBundle_d__109;
}
namespace GlobalNamespace {
struct __AccountManager___TryPurchaseCreatorPack_d__103;
}
namespace GlobalNamespace {
struct __AccountManager___TryPurchasePrivateSandbox_d__101;
}
namespace GlobalNamespace {
struct __AccountManager___TryPurchaseToDatabase_d__100;
}
namespace GlobalNamespace {
struct __AccountManager___ValidateMobileAccount_d__81;
}
namespace GlobalNamespace {
class __AccountManager____c;
}
namespace GlobalNamespace {
class __AccountManager____c__DisplayClass48_0;
}
namespace GlobalNamespace {
class __OculusEntitlementManager__OnFetchOculusUserDataFailed;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct DateTime;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace GlobalNamespace {
class AccountManager;
}
namespace GlobalNamespace {
class __AccountManager__OnAccountDataLoaded;
}
namespace GlobalNamespace {
class __AccountManager__OnBanned;
}
namespace GlobalNamespace {
class __AccountManager__OnBundlePurchaseFailure;
}
namespace GlobalNamespace {
class __AccountManager__OnBundlePurchaseSuccess;
}
namespace GlobalNamespace {
class __AccountManager__OnCurrencyAddedFailure;
}
namespace GlobalNamespace {
class __AccountManager__OnCurrencyAddedSuccess;
}
namespace GlobalNamespace {
class __AccountManager__OnCurrencyResetFailure;
}
namespace GlobalNamespace {
class __AccountManager__OnCurrencyResetSuccess;
}
namespace GlobalNamespace {
class __AccountManager__OnFetchAccountDataFailed;
}
namespace GlobalNamespace {
class __AccountManager__OnFetchAccountDataSuccess;
}
namespace GlobalNamespace {
class __AccountManager__OnItemsResetFailure;
}
namespace GlobalNamespace {
class __AccountManager__OnItemsResetSuccess;
}
namespace GlobalNamespace {
class __AccountManager__OnLinkedToMobileAccount;
}
namespace GlobalNamespace {
class __AccountManager__OnMobileAccountLinkFailed;
}
namespace GlobalNamespace {
class __AccountManager__OnMobileAccountLinkSuccess;
}
namespace GlobalNamespace {
class __AccountManager__OnMobileCodeResetFailed;
}
namespace GlobalNamespace {
class __AccountManager__OnMobileCodeResetSuccess;
}
namespace GlobalNamespace {
class __AccountManager__OnPurchaseFailure;
}
namespace GlobalNamespace {
class __AccountManager__OnPurchaseItemSuccess;
}
namespace GlobalNamespace {
class __AccountManager__OnPurchaseSuccess;
}
namespace GlobalNamespace {
class __AccountManager__OnUserIDAssigned;
}
namespace GlobalNamespace {
class __AccountManager__OnValidateMobileAccountFailed;
}
namespace GlobalNamespace {
class __AccountManager__OnValidateMobileAccountSuccess;
}
namespace GlobalNamespace {
class __AccountManager____c;
}
namespace GlobalNamespace {
class __AccountManager____c__DisplayClass48_0;
}
namespace GlobalNamespace {
struct __AccountManager___AddCurrencyToDatabase_d__106;
}
namespace GlobalNamespace {
struct __AccountManager___CheckGameCompatability_d__58;
}
namespace GlobalNamespace {
struct __AccountManager___CheckGuestGameAccess_d__57;
}
namespace GlobalNamespace {
struct __AccountManager___LinkMobileAccount_d__70;
}
namespace GlobalNamespace {
struct __AccountManager___LogIntoAccount_d__53;
}
namespace GlobalNamespace {
struct __AccountManager___LogIntoMobileAccount_d__54;
}
namespace GlobalNamespace {
struct __AccountManager___LoginAsMobile_d__48;
}
namespace GlobalNamespace {
struct __AccountManager___ResetCurrencyToDatabase_d__117;
}
namespace GlobalNamespace {
struct __AccountManager___ResetMobileCode_d__78;
}
namespace GlobalNamespace {
struct __AccountManager___ResetOwnedItemsToDatabase_d__120;
}
namespace GlobalNamespace {
struct __AccountManager___SaveQueuedActiveCosmeticsToDatabase_d__96;
}
namespace GlobalNamespace {
struct __AccountManager___SkipLoginWithGuestAccount_d__49;
}
namespace GlobalNamespace {
struct __AccountManager___TryExpandPrivateWorld_d__102;
}
namespace GlobalNamespace {
struct __AccountManager___TryPurchaseBundle_d__109;
}
namespace GlobalNamespace {
struct __AccountManager___TryPurchaseCreatorPack_d__103;
}
namespace GlobalNamespace {
struct __AccountManager___TryPurchasePrivateSandbox_d__101;
}
namespace GlobalNamespace {
struct __AccountManager___TryPurchaseToDatabase_d__100;
}
namespace GlobalNamespace {
struct __AccountManager___ValidateMobileAccount_d__81;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AccountManager);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager__OnAccountDataLoaded);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager__OnBanned);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager__OnBundlePurchaseFailure);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager__OnBundlePurchaseSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager__OnCurrencyAddedFailure);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager__OnCurrencyAddedSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager__OnCurrencyResetFailure);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager__OnCurrencyResetSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager__OnFetchAccountDataFailed);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager__OnFetchAccountDataSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager__OnItemsResetFailure);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager__OnItemsResetSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager__OnLinkedToMobileAccount);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager__OnMobileAccountLinkFailed);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager__OnMobileAccountLinkSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager__OnMobileCodeResetFailed);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager__OnMobileCodeResetSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager__OnPurchaseFailure);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager__OnPurchaseItemSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager__OnPurchaseSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager__OnUserIDAssigned);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager__OnValidateMobileAccountFailed);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager__OnValidateMobileAccountSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager____c);
MARK_REF_PTR_T(::GlobalNamespace::__AccountManager____c__DisplayClass48_0);
MARK_VAL_T(::GlobalNamespace::__AccountManager___AddCurrencyToDatabase_d__106);
MARK_VAL_T(::GlobalNamespace::__AccountManager___CheckGameCompatability_d__58);
MARK_VAL_T(::GlobalNamespace::__AccountManager___CheckGuestGameAccess_d__57);
MARK_VAL_T(::GlobalNamespace::__AccountManager___LinkMobileAccount_d__70);
MARK_VAL_T(::GlobalNamespace::__AccountManager___LogIntoAccount_d__53);
MARK_VAL_T(::GlobalNamespace::__AccountManager___LogIntoMobileAccount_d__54);
MARK_VAL_T(::GlobalNamespace::__AccountManager___LoginAsMobile_d__48);
MARK_VAL_T(::GlobalNamespace::__AccountManager___ResetCurrencyToDatabase_d__117);
MARK_VAL_T(::GlobalNamespace::__AccountManager___ResetMobileCode_d__78);
MARK_VAL_T(::GlobalNamespace::__AccountManager___ResetOwnedItemsToDatabase_d__120);
MARK_VAL_T(::GlobalNamespace::__AccountManager___SaveQueuedActiveCosmeticsToDatabase_d__96);
MARK_VAL_T(::GlobalNamespace::__AccountManager___SkipLoginWithGuestAccount_d__49);
MARK_VAL_T(::GlobalNamespace::__AccountManager___TryExpandPrivateWorld_d__102);
MARK_VAL_T(::GlobalNamespace::__AccountManager___TryPurchaseBundle_d__109);
MARK_VAL_T(::GlobalNamespace::__AccountManager___TryPurchaseCreatorPack_d__103);
MARK_VAL_T(::GlobalNamespace::__AccountManager___TryPurchasePrivateSandbox_d__101);
MARK_VAL_T(::GlobalNamespace::__AccountManager___TryPurchaseToDatabase_d__100);
MARK_VAL_T(::GlobalNamespace::__AccountManager___ValidateMobileAccount_d__81);
// Type: ::OnUserIDAssigned
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::OnUserIDAssigned*
class CORDL_TYPE __AccountManager__OnUserIDAssigned : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e1026c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e1028c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e10258, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__AccountManager__OnUserIDAssigned* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e1019c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager__OnUserIDAssigned();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnUserIDAssigned", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager__OnUserIDAssigned(__AccountManager__OnUserIDAssigned&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnUserIDAssigned", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager__OnUserIDAssigned(__AccountManager__OnUserIDAssigned const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager__OnUserIDAssigned, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnAccountDataLoaded
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::OnAccountDataLoaded*
class CORDL_TYPE __AccountManager__OnAccountDataLoaded : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e102ac, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::AccountData* accountData, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e102cc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e10298, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::AccountData* accountData);

  static inline ::GlobalNamespace::__AccountManager__OnAccountDataLoaded* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e04a6c, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager__OnAccountDataLoaded();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnAccountDataLoaded", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager__OnAccountDataLoaded(__AccountManager__OnAccountDataLoaded&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnAccountDataLoaded", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager__OnAccountDataLoaded(__AccountManager__OnAccountDataLoaded const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager__OnAccountDataLoaded, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnFetchAccountDataSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::OnFetchAccountDataSuccess*
class CORDL_TYPE __AccountManager__OnFetchAccountDataSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e102ec, size 0x90, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::AccountData* accountData, ::System::DateTime serverTime, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e1037c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e102d8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::AccountData* accountData, ::System::DateTime serverTime);

  static inline ::GlobalNamespace::__AccountManager__OnFetchAccountDataSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e0ff94, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager__OnFetchAccountDataSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnFetchAccountDataSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager__OnFetchAccountDataSuccess(__AccountManager__OnFetchAccountDataSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnFetchAccountDataSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager__OnFetchAccountDataSuccess(__AccountManager__OnFetchAccountDataSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager__OnFetchAccountDataSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnFetchAccountDataFailed
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::OnFetchAccountDataFailed*
class CORDL_TYPE __AccountManager__OnFetchAccountDataFailed : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e1039c, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errorMessage, ::StringW errorType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e103c4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e10388, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errorMessage, ::StringW errorType);

  static inline ::GlobalNamespace::__AccountManager__OnFetchAccountDataFailed* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e100c4, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager__OnFetchAccountDataFailed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnFetchAccountDataFailed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager__OnFetchAccountDataFailed(__AccountManager__OnFetchAccountDataFailed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnFetchAccountDataFailed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager__OnFetchAccountDataFailed(__AccountManager__OnFetchAccountDataFailed const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager__OnFetchAccountDataFailed, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnLinkedToMobileAccount
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::OnLinkedToMobileAccount*
class CORDL_TYPE __AccountManager__OnLinkedToMobileAccount : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e104a0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e104c0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e1048c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__AccountManager__OnLinkedToMobileAccount* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e103d0, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager__OnLinkedToMobileAccount();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnLinkedToMobileAccount", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager__OnLinkedToMobileAccount(__AccountManager__OnLinkedToMobileAccount&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnLinkedToMobileAccount", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager__OnLinkedToMobileAccount(__AccountManager__OnLinkedToMobileAccount const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager__OnLinkedToMobileAccount, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnMobileAccountLinkSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::OnMobileAccountLinkSuccess*
class CORDL_TYPE __AccountManager__OnMobileAccountLinkSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e104e0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e10500, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e104cc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__AccountManager__OnMobileAccountLinkSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e07d90, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager__OnMobileAccountLinkSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnMobileAccountLinkSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager__OnMobileAccountLinkSuccess(__AccountManager__OnMobileAccountLinkSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnMobileAccountLinkSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager__OnMobileAccountLinkSuccess(__AccountManager__OnMobileAccountLinkSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager__OnMobileAccountLinkSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnMobileAccountLinkFailed
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::OnMobileAccountLinkFailed*
class CORDL_TYPE __AccountManager__OnMobileAccountLinkFailed : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e10520, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errorType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e10540, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e1050c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errorType);

  static inline ::GlobalNamespace::__AccountManager__OnMobileAccountLinkFailed* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e07e4c, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager__OnMobileAccountLinkFailed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnMobileAccountLinkFailed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager__OnMobileAccountLinkFailed(__AccountManager__OnMobileAccountLinkFailed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnMobileAccountLinkFailed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager__OnMobileAccountLinkFailed(__AccountManager__OnMobileAccountLinkFailed const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager__OnMobileAccountLinkFailed, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnMobileCodeResetSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::OnMobileCodeResetSuccess*
class CORDL_TYPE __AccountManager__OnMobileCodeResetSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e10560, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW newCode, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e10580, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e1054c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW newCode);

  static inline ::GlobalNamespace::__AccountManager__OnMobileCodeResetSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e04f4c, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager__OnMobileCodeResetSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnMobileCodeResetSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager__OnMobileCodeResetSuccess(__AccountManager__OnMobileCodeResetSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnMobileCodeResetSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager__OnMobileCodeResetSuccess(__AccountManager__OnMobileCodeResetSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager__OnMobileCodeResetSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnMobileCodeResetFailed
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::OnMobileCodeResetFailed*
class CORDL_TYPE __AccountManager__OnMobileCodeResetFailed : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e105a0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errorType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e105c0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e1058c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errorType);

  static inline ::GlobalNamespace::__AccountManager__OnMobileCodeResetFailed* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e05020, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager__OnMobileCodeResetFailed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnMobileCodeResetFailed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager__OnMobileCodeResetFailed(__AccountManager__OnMobileCodeResetFailed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnMobileCodeResetFailed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager__OnMobileCodeResetFailed(__AccountManager__OnMobileCodeResetFailed const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager__OnMobileCodeResetFailed, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnValidateMobileAccountSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::OnValidateMobileAccountSuccess*
class CORDL_TYPE __AccountManager__OnValidateMobileAccountSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e105e0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e10600, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e105cc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__AccountManager__OnValidateMobileAccountSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2dfd99c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager__OnValidateMobileAccountSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnValidateMobileAccountSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager__OnValidateMobileAccountSuccess(__AccountManager__OnValidateMobileAccountSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnValidateMobileAccountSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager__OnValidateMobileAccountSuccess(__AccountManager__OnValidateMobileAccountSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager__OnValidateMobileAccountSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnValidateMobileAccountFailed
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::OnValidateMobileAccountFailed*
class CORDL_TYPE __AccountManager__OnValidateMobileAccountFailed : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e10620, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errorType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e10640, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e1060c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errorType);

  static inline ::GlobalNamespace::__AccountManager__OnValidateMobileAccountFailed* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2dfda58, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager__OnValidateMobileAccountFailed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnValidateMobileAccountFailed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager__OnValidateMobileAccountFailed(__AccountManager__OnValidateMobileAccountFailed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnValidateMobileAccountFailed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager__OnValidateMobileAccountFailed(__AccountManager__OnValidateMobileAccountFailed const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager__OnValidateMobileAccountFailed, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnPurchaseSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::OnPurchaseSuccess*
class CORDL_TYPE __AccountManager__OnPurchaseSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e10660, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t cost, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e106e4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e1064c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t cost);

  static inline ::GlobalNamespace::__AccountManager__OnPurchaseSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e06f5c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager__OnPurchaseSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnPurchaseSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager__OnPurchaseSuccess(__AccountManager__OnPurchaseSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnPurchaseSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager__OnPurchaseSuccess(__AccountManager__OnPurchaseSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager__OnPurchaseSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnPurchaseItemSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::OnPurchaseItemSuccess*
class CORDL_TYPE __AccountManager__OnPurchaseItemSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e107c8, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t cost, int32_t currencyValueIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e10860, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e107b4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t cost, int32_t currencyValueIndex);

  static inline ::GlobalNamespace::__AccountManager__OnPurchaseItemSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e106f0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager__OnPurchaseItemSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnPurchaseItemSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager__OnPurchaseItemSuccess(__AccountManager__OnPurchaseItemSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnPurchaseItemSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager__OnPurchaseItemSuccess(__AccountManager__OnPurchaseItemSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager__OnPurchaseItemSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnPurchaseFailure
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::OnPurchaseFailure*
class CORDL_TYPE __AccountManager__OnPurchaseFailure : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e10880, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errorType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e108a0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e1086c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errorType);

  static inline ::GlobalNamespace::__AccountManager__OnPurchaseFailure* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e07020, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager__OnPurchaseFailure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnPurchaseFailure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager__OnPurchaseFailure(__AccountManager__OnPurchaseFailure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnPurchaseFailure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager__OnPurchaseFailure(__AccountManager__OnPurchaseFailure const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager__OnPurchaseFailure, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnCurrencyAddedSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::OnCurrencyAddedSuccess*
class CORDL_TYPE __AccountManager__OnCurrencyAddedSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e10984, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t addedAmount, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e10a08, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e10970, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t addedAmount);

  static inline ::GlobalNamespace::__AccountManager__OnCurrencyAddedSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e108ac, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager__OnCurrencyAddedSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnCurrencyAddedSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager__OnCurrencyAddedSuccess(__AccountManager__OnCurrencyAddedSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnCurrencyAddedSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager__OnCurrencyAddedSuccess(__AccountManager__OnCurrencyAddedSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager__OnCurrencyAddedSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnCurrencyAddedFailure
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::OnCurrencyAddedFailure*
class CORDL_TYPE __AccountManager__OnCurrencyAddedFailure : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e10afc, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errorType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e10b1c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e10ae8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errorType);

  static inline ::GlobalNamespace::__AccountManager__OnCurrencyAddedFailure* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e10a14, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager__OnCurrencyAddedFailure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnCurrencyAddedFailure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager__OnCurrencyAddedFailure(__AccountManager__OnCurrencyAddedFailure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnCurrencyAddedFailure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager__OnCurrencyAddedFailure(__AccountManager__OnCurrencyAddedFailure const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager__OnCurrencyAddedFailure, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnBundlePurchaseSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::OnBundlePurchaseSuccess*
class CORDL_TYPE __AccountManager__OnBundlePurchaseSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e10c00, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t currencyAmount, int32_t centCost, ::System::Collections::Generic::List_1<::StringW>* bundleItems, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e10ca4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e10bec, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t currencyAmount, int32_t centCost, ::System::Collections::Generic::List_1<::StringW>* bundleItems);

  static inline ::GlobalNamespace::__AccountManager__OnBundlePurchaseSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e10b28, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager__OnBundlePurchaseSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnBundlePurchaseSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager__OnBundlePurchaseSuccess(__AccountManager__OnBundlePurchaseSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnBundlePurchaseSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager__OnBundlePurchaseSuccess(__AccountManager__OnBundlePurchaseSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager__OnBundlePurchaseSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnBundlePurchaseFailure
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::OnBundlePurchaseFailure*
class CORDL_TYPE __AccountManager__OnBundlePurchaseFailure : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e10d98, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errorType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e10db8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e10d84, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errorType);

  static inline ::GlobalNamespace::__AccountManager__OnBundlePurchaseFailure* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e10cb0, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager__OnBundlePurchaseFailure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnBundlePurchaseFailure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager__OnBundlePurchaseFailure(__AccountManager__OnBundlePurchaseFailure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnBundlePurchaseFailure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager__OnBundlePurchaseFailure(__AccountManager__OnBundlePurchaseFailure const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager__OnBundlePurchaseFailure, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnBanned
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::OnBanned*
class CORDL_TYPE __AccountManager__OnBanned : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e10e94, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e10eb4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e10e80, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__AccountManager__OnBanned* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e10dc4, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager__OnBanned();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnBanned", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager__OnBanned(__AccountManager__OnBanned&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnBanned", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager__OnBanned(__AccountManager__OnBanned const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager__OnBanned, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnCurrencyResetSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::OnCurrencyResetSuccess*
class CORDL_TYPE __AccountManager__OnCurrencyResetSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e10f98, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t newAmount, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e1101c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e10f84, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t newAmount);

  static inline ::GlobalNamespace::__AccountManager__OnCurrencyResetSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e10ec0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager__OnCurrencyResetSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnCurrencyResetSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager__OnCurrencyResetSuccess(__AccountManager__OnCurrencyResetSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnCurrencyResetSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager__OnCurrencyResetSuccess(__AccountManager__OnCurrencyResetSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager__OnCurrencyResetSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnCurrencyResetFailure
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::OnCurrencyResetFailure*
class CORDL_TYPE __AccountManager__OnCurrencyResetFailure : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e11110, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errorType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e11130, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e110fc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errorType);

  static inline ::GlobalNamespace::__AccountManager__OnCurrencyResetFailure* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e11028, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager__OnCurrencyResetFailure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnCurrencyResetFailure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager__OnCurrencyResetFailure(__AccountManager__OnCurrencyResetFailure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnCurrencyResetFailure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager__OnCurrencyResetFailure(__AccountManager__OnCurrencyResetFailure const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager__OnCurrencyResetFailure, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnItemsResetSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::OnItemsResetSuccess*
class CORDL_TYPE __AccountManager__OnItemsResetSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e1127c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::StringW>* newOwnedItemKeys, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e1129c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e11268, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Collections::Generic::List_1<::StringW>* newOwnedItemKeys);

  static inline ::GlobalNamespace::__AccountManager__OnItemsResetSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e1113c, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager__OnItemsResetSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnItemsResetSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager__OnItemsResetSuccess(__AccountManager__OnItemsResetSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnItemsResetSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager__OnItemsResetSuccess(__AccountManager__OnItemsResetSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager__OnItemsResetSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnItemsResetFailure
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::OnItemsResetFailure*
class CORDL_TYPE __AccountManager__OnItemsResetFailure : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e11390, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errorType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e113b0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e1137c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errorType);

  static inline ::GlobalNamespace::__AccountManager__OnItemsResetFailure* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e112a8, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager__OnItemsResetFailure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnItemsResetFailure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager__OnItemsResetFailure(__AccountManager__OnItemsResetFailure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager__OnItemsResetFailure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager__OnItemsResetFailure(__AccountManager__OnItemsResetFailure const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager__OnItemsResetFailure, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::<>c*
class CORDL_TYPE __AccountManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__AccountManager____c* __9;

  /// @brief Field <>9__45_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__45_1, put = setStaticF___9__45_1))::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataFailed* __9__45_1;

  /// @brief Field <>9__45_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__45_2, put = setStaticF___9__45_2))::GlobalNamespace::__AccountManager__OnFetchAccountDataSuccess* __9__45_2;

  /// @brief Field <>9__45_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__45_3, put = setStaticF___9__45_3))::GlobalNamespace::__AccountManager__OnFetchAccountDataFailed* __9__45_3;

  static inline ::GlobalNamespace::__AccountManager____c* New_ctor();

  /// @brief Method <LoginToOculusAccountOnDevice>b__45_1, addr 0x2e11610, size 0x80, virtual false, abstract: false, final false
  inline void _LoginToOculusAccountOnDevice_b__45_1(::StringW errorType);

  /// @brief Method <LoginToOculusAccountOnDevice>b__45_2, addr 0x2e11428, size 0x100, virtual false, abstract: false, final false
  inline void _LoginToOculusAccountOnDevice_b__45_2(::GlobalNamespace::AccountData* accountData, ::System::DateTime serverTime);

  /// @brief Method <LoginToOculusAccountOnDevice>b__45_3, addr 0x2e11528, size 0xe8, virtual false, abstract: false, final false
  inline void _LoginToOculusAccountOnDevice_b__45_3(::StringW errorMessage, ::StringW errorType);

  /// @brief Method .ctor, addr 0x2e11420, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__AccountManager____c* getStaticF___9();

  static inline ::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataFailed* getStaticF___9__45_1();

  static inline ::GlobalNamespace::__AccountManager__OnFetchAccountDataSuccess* getStaticF___9__45_2();

  static inline ::GlobalNamespace::__AccountManager__OnFetchAccountDataFailed* getStaticF___9__45_3();

  static inline void setStaticF___9(::GlobalNamespace::__AccountManager____c* value);

  static inline void setStaticF___9__45_1(::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataFailed* value);

  static inline void setStaticF___9__45_2(::GlobalNamespace::__AccountManager__OnFetchAccountDataSuccess* value);

  static inline void setStaticF___9__45_3(::GlobalNamespace::__AccountManager__OnFetchAccountDataFailed* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager____c(__AccountManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager____c(__AccountManager____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass48_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager::<>c__DisplayClass48_0*
class CORDL_TYPE __AccountManager____c__DisplayClass48_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::AccountManager> __4__this;

  /// @brief Field cachedAccountID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cachedAccountID, put = __cordl_internal_set_cachedAccountID))::StringW cachedAccountID;

  static inline ::GlobalNamespace::__AccountManager____c__DisplayClass48_0* New_ctor();

  /// @brief Method <LoginAsMobile>b__0, addr 0x2e11698, size 0x1a8, virtual false, abstract: false, final false
  inline void _LoginAsMobile_b__0(::GlobalNamespace::AccountData* accountData, ::System::DateTime serverTime);

  /// @brief Method <LoginAsMobile>b__1, addr 0x2e11840, size 0x154, virtual false, abstract: false, final false
  inline void _LoginAsMobile_b__1(::StringW errorMessage, ::StringW errorType);

  constexpr ::UnityW<::GlobalNamespace::AccountManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::AccountManager>& __cordl_internal_get___4__this();

  constexpr ::StringW const& __cordl_internal_get_cachedAccountID() const;

  constexpr ::StringW& __cordl_internal_get_cachedAccountID();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::AccountManager> value);

  constexpr void __cordl_internal_set_cachedAccountID(::StringW value);

  /// @brief Method .ctor, addr 0x2e11690, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager____c__DisplayClass48_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager____c__DisplayClass48_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountManager____c__DisplayClass48_0(__AccountManager____c__DisplayClass48_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountManager____c__DisplayClass48_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountManager____c__DisplayClass48_0(__AccountManager____c__DisplayClass48_0 const&) = delete;

  /// @brief Field cachedAccountID, offset: 0x10, size: 0x8, def value: None
  ::StringW ___cachedAccountID;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AccountManager> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager____c__DisplayClass48_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager____c__DisplayClass48_0, ___cachedAccountID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager____c__DisplayClass48_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoginAsMobile>d__48
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountManager::<LoginAsMobile>d__48
struct CORDL_TYPE __AccountManager___LoginAsMobile_d__48 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2e11994, size 0x53c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2e11ed0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager___LoginAsMobile_d__48();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::AccountManager>", modifiers: "",
  // def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__AccountManager____c__DisplayClass48_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __AccountManager___LoginAsMobile_d__48(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::AccountManager> __4__this,
                                                   ::GlobalNamespace::__AccountManager____c__DisplayClass48_0* __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AccountManager> __4__this;

  /// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager____c__DisplayClass48_0* __8__1;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager___LoginAsMobile_d__48, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LoginAsMobile_d__48, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LoginAsMobile_d__48, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LoginAsMobile_d__48, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LoginAsMobile_d__48, __8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LoginAsMobile_d__48, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<SkipLoginWithGuestAccount>d__49
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountManager::<SkipLoginWithGuestAccount>d__49
struct CORDL_TYPE __AccountManager___SkipLoginWithGuestAccount_d__49 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2e11edc, size 0x5b4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2e12490, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager___SkipLoginWithGuestAccount_d__49();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __AccountManager___SkipLoginWithGuestAccount_d__49(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager___SkipLoginWithGuestAccount_d__49, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___SkipLoginWithGuestAccount_d__49, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___SkipLoginWithGuestAccount_d__49, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___SkipLoginWithGuestAccount_d__49, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LogIntoAccount>d__53
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountManager::<LogIntoAccount>d__53
struct CORDL_TYPE __AccountManager___LogIntoAccount_d__53 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2e1249c, size 0x948, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2e12de4, size 0x100c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager___LogIntoAccount_d__53();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onFailed", ty: "::GlobalNamespace::__AccountManager__OnFetchAccountDataFailed*",
  // modifiers: "", def_value: None }, CppParam { name: "accountID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "oculusID", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "oculusNumber", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::AccountManager>", modifiers: "", def_value: None
  // }, CppParam { name: "onSuccess", ty: "::GlobalNamespace::__AccountManager__OnFetchAccountDataSuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __AccountManager___LogIntoAccount_d__53(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                    ::GlobalNamespace::__AccountManager__OnFetchAccountDataFailed* onFailed, ::StringW accountID, ::StringW oculusID, ::StringW oculusNumber,
                                                    ::UnityW<::GlobalNamespace::AccountManager> __4__this, ::GlobalNamespace::__AccountManager__OnFetchAccountDataSuccess* onSuccess,
                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field onFailed, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnFetchAccountDataFailed* onFailed;

  /// @brief Field accountID, offset: 0x30, size: 0x8, def value: None
  ::StringW accountID;

  /// @brief Field oculusID, offset: 0x38, size: 0x8, def value: None
  ::StringW oculusID;

  /// @brief Field oculusNumber, offset: 0x40, size: 0x8, def value: None
  ::StringW oculusNumber;

  /// @brief Field <>4__this, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AccountManager> __4__this;

  /// @brief Field onSuccess, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnFetchAccountDataSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager___LogIntoAccount_d__53, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LogIntoAccount_d__53, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LogIntoAccount_d__53, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LogIntoAccount_d__53, onFailed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LogIntoAccount_d__53, accountID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LogIntoAccount_d__53, oculusID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LogIntoAccount_d__53, oculusNumber) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LogIntoAccount_d__53, __4__this) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LogIntoAccount_d__53, onSuccess) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LogIntoAccount_d__53, __u__1) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LogIntoMobileAccount>d__54
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountManager::<LogIntoMobileAccount>d__54
struct CORDL_TYPE __AccountManager___LogIntoMobileAccount_d__54 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c6b0d4, size 0x79c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c6b870, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager___LogIntoMobileAccount_d__54();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onFailed", ty: "::GlobalNamespace::__AccountManager__OnFetchAccountDataFailed*",
  // modifiers: "", def_value: None }, CppParam { name: "accountID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mobileCode", ty: "::StringW", modifiers: "", def_value: None
  // }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::AccountManager>", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty:
  // "::GlobalNamespace::__AccountManager__OnFetchAccountDataSuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __AccountManager___LogIntoMobileAccount_d__54(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                          ::GlobalNamespace::__AccountManager__OnFetchAccountDataFailed* onFailed, ::StringW accountID, ::StringW mobileCode,
                                                          ::UnityW<::GlobalNamespace::AccountManager> __4__this, ::GlobalNamespace::__AccountManager__OnFetchAccountDataSuccess* onSuccess,
                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field onFailed, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnFetchAccountDataFailed* onFailed;

  /// @brief Field accountID, offset: 0x30, size: 0x8, def value: None
  ::StringW accountID;

  /// @brief Field mobileCode, offset: 0x38, size: 0x8, def value: None
  ::StringW mobileCode;

  /// @brief Field <>4__this, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AccountManager> __4__this;

  /// @brief Field onSuccess, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnFetchAccountDataSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager___LogIntoMobileAccount_d__54, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LogIntoMobileAccount_d__54, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LogIntoMobileAccount_d__54, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LogIntoMobileAccount_d__54, onFailed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LogIntoMobileAccount_d__54, accountID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LogIntoMobileAccount_d__54, mobileCode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LogIntoMobileAccount_d__54, __4__this) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LogIntoMobileAccount_d__54, onSuccess) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LogIntoMobileAccount_d__54, __u__1) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<CheckGuestGameAccess>d__57
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountManager::<CheckGuestGameAccess>d__57
struct CORDL_TYPE __AccountManager___CheckGuestGameAccess_d__57 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c6b87c, size 0x2c4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c6bb40, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager___CheckGuestGameAccess_d__57();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: None }]
  constexpr __AccountManager___CheckGuestGameAccess_d__57(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager___CheckGuestGameAccess_d__57, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___CheckGuestGameAccess_d__57, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___CheckGuestGameAccess_d__57, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___CheckGuestGameAccess_d__57, __u__1) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<CheckGameCompatability>d__58
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountManager::<CheckGameCompatability>d__58
struct CORDL_TYPE __AccountManager___CheckGameCompatability_d__58 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c6bb98, size 0x354, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c6beec, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager___CheckGameCompatability_d__58();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: None }]
  constexpr __AccountManager___CheckGameCompatability_d__58(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager___CheckGameCompatability_d__58, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___CheckGameCompatability_d__58, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___CheckGameCompatability_d__58, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___CheckGameCompatability_d__58, __u__1) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LinkMobileAccount>d__70
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountManager::<LinkMobileAccount>d__70
struct CORDL_TYPE __AccountManager___LinkMobileAccount_d__70 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c6bf44, size 0x4b4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c6c3f8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager___LinkMobileAccount_d__70();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "newOculusID", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "newMobileCode", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onFailed", ty: "::GlobalNamespace::__AccountManager__OnMobileAccountLinkFailed*", modifiers: "",
  // def_value: None }, CppParam { name: "onSuccess", ty: "::GlobalNamespace::__AccountManager__OnMobileAccountLinkSuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __AccountManager___LinkMobileAccount_d__70(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW newOculusID, ::StringW newMobileCode,
                                                       ::GlobalNamespace::__AccountManager__OnMobileAccountLinkFailed* onFailed,
                                                       ::GlobalNamespace::__AccountManager__OnMobileAccountLinkSuccess* onSuccess,
                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field newOculusID, offset: 0x28, size: 0x8, def value: None
  ::StringW newOculusID;

  /// @brief Field newMobileCode, offset: 0x30, size: 0x8, def value: None
  ::StringW newMobileCode;

  /// @brief Field onFailed, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnMobileAccountLinkFailed* onFailed;

  /// @brief Field onSuccess, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnMobileAccountLinkSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager___LinkMobileAccount_d__70, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LinkMobileAccount_d__70, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LinkMobileAccount_d__70, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LinkMobileAccount_d__70, newOculusID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LinkMobileAccount_d__70, newMobileCode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LinkMobileAccount_d__70, onFailed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LinkMobileAccount_d__70, onSuccess) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___LinkMobileAccount_d__70, __u__1) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ResetMobileCode>d__78
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountManager::<ResetMobileCode>d__78
struct CORDL_TYPE __AccountManager___ResetMobileCode_d__78 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c6c404, size 0x500, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c6c904, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager___ResetMobileCode_d__78();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::GlobalNamespace::__AccountManager__OnMobileCodeResetFailed*",
  // modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::GlobalNamespace::__AccountManager__OnMobileCodeResetSuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1",
  // ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __AccountManager___ResetMobileCode_d__78(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                     ::GlobalNamespace::__AccountManager__OnMobileCodeResetFailed* onFailure, ::GlobalNamespace::__AccountManager__OnMobileCodeResetSuccess* onSuccess,
                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnMobileCodeResetFailed* onFailure;

  /// @brief Field onSuccess, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnMobileCodeResetSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager___ResetMobileCode_d__78, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___ResetMobileCode_d__78, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___ResetMobileCode_d__78, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___ResetMobileCode_d__78, onFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___ResetMobileCode_d__78, onSuccess) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___ResetMobileCode_d__78, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ValidateMobileAccount>d__81
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountManager::<ValidateMobileAccount>d__81
struct CORDL_TYPE __AccountManager___ValidateMobileAccount_d__81 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c6c910, size 0x5bc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c6cecc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager___ValidateMobileAccount_d__81();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onFailed", ty:
  // "::GlobalNamespace::__AccountManager__OnValidateMobileAccountFailed*", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty:
  // "::GlobalNamespace::__AccountManager__OnValidateMobileAccountSuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __AccountManager___ValidateMobileAccount_d__81(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                           ::GlobalNamespace::__AccountManager__OnValidateMobileAccountFailed* onFailed,
                                                           ::GlobalNamespace::__AccountManager__OnValidateMobileAccountSuccess* onSuccess,
                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field onFailed, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnValidateMobileAccountFailed* onFailed;

  /// @brief Field onSuccess, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnValidateMobileAccountSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager___ValidateMobileAccount_d__81, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___ValidateMobileAccount_d__81, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___ValidateMobileAccount_d__81, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___ValidateMobileAccount_d__81, onFailed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___ValidateMobileAccount_d__81, onSuccess) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___ValidateMobileAccount_d__81, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<SaveQueuedActiveCosmeticsToDatabase>d__96
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountManager::<SaveQueuedActiveCosmeticsToDatabase>d__96
struct CORDL_TYPE __AccountManager___SaveQueuedActiveCosmeticsToDatabase_d__96 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c6ced8, size 0x46c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c6d344, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager___SaveQueuedActiveCosmeticsToDatabase_d__96();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::AccountManager>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __AccountManager___SaveQueuedActiveCosmeticsToDatabase_d__96(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                         ::UnityW<::GlobalNamespace::AccountManager> __4__this,
                                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AccountManager> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager___SaveQueuedActiveCosmeticsToDatabase_d__96, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___SaveQueuedActiveCosmeticsToDatabase_d__96, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___SaveQueuedActiveCosmeticsToDatabase_d__96, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___SaveQueuedActiveCosmeticsToDatabase_d__96, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___SaveQueuedActiveCosmeticsToDatabase_d__96, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<TryPurchaseToDatabase>d__100
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountManager::<TryPurchaseToDatabase>d__100
struct CORDL_TYPE __AccountManager___TryPurchaseToDatabase_d__100 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c6d350, size 0x87c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c6dbcc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager___TryPurchaseToDatabase_d__100();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::GlobalNamespace::__AccountManager__OnPurchaseFailure*",
  // modifiers: "", def_value: None }, CppParam { name: "poolKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "itemKey", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "expectedPrice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::GlobalNamespace::__AccountManager__OnPurchaseItemSuccess*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __AccountManager___TryPurchaseToDatabase_d__100(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                            ::GlobalNamespace::__AccountManager__OnPurchaseFailure* onFailure, ::StringW poolKey, ::StringW itemKey, int32_t expectedPrice,
                                                            ::GlobalNamespace::__AccountManager__OnPurchaseItemSuccess* onSuccess,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnPurchaseFailure* onFailure;

  /// @brief Field poolKey, offset: 0x30, size: 0x8, def value: None
  ::StringW poolKey;

  /// @brief Field itemKey, offset: 0x38, size: 0x8, def value: None
  ::StringW itemKey;

  /// @brief Field expectedPrice, offset: 0x40, size: 0x4, def value: None
  int32_t expectedPrice;

  /// @brief Field onSuccess, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnPurchaseItemSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager___TryPurchaseToDatabase_d__100, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchaseToDatabase_d__100, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchaseToDatabase_d__100, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchaseToDatabase_d__100, onFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchaseToDatabase_d__100, poolKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchaseToDatabase_d__100, itemKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchaseToDatabase_d__100, expectedPrice) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchaseToDatabase_d__100, onSuccess) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchaseToDatabase_d__100, __u__1) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<TryPurchasePrivateSandbox>d__101
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountManager::<TryPurchasePrivateSandbox>d__101
struct CORDL_TYPE __AccountManager___TryPurchasePrivateSandbox_d__101 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c6dbd8, size 0x5ac, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c6e184, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager___TryPurchasePrivateSandbox_d__101();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::GlobalNamespace::__AccountManager__OnPurchaseFailure*",
  // modifiers: "", def_value: None }, CppParam { name: "expectedPrice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty:
  // "::GlobalNamespace::__AccountManager__OnPurchaseSuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __AccountManager___TryPurchasePrivateSandbox_d__101(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                ::GlobalNamespace::__AccountManager__OnPurchaseFailure* onFailure, int32_t expectedPrice,
                                                                ::GlobalNamespace::__AccountManager__OnPurchaseSuccess* onSuccess,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnPurchaseFailure* onFailure;

  /// @brief Field expectedPrice, offset: 0x30, size: 0x4, def value: None
  int32_t expectedPrice;

  /// @brief Field onSuccess, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnPurchaseSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager___TryPurchasePrivateSandbox_d__101, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchasePrivateSandbox_d__101, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchasePrivateSandbox_d__101, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchasePrivateSandbox_d__101, onFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchasePrivateSandbox_d__101, expectedPrice) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchasePrivateSandbox_d__101, onSuccess) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchasePrivateSandbox_d__101, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<TryExpandPrivateWorld>d__102
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountManager::<TryExpandPrivateWorld>d__102
struct CORDL_TYPE __AccountManager___TryExpandPrivateWorld_d__102 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c6e190, size 0x720, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c6e8b0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager___TryExpandPrivateWorld_d__102();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::GlobalNamespace::__AccountManager__OnPurchaseFailure*",
  // modifiers: "", def_value: None }, CppParam { name: "themeKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "expectedPrice", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "roomCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "gridPosition", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam {
  // name: "onSuccess", ty: "::GlobalNamespace::__AccountManager__OnPurchaseSuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __AccountManager___TryExpandPrivateWorld_d__102(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                            ::GlobalNamespace::__AccountManager__OnPurchaseFailure* onFailure, ::StringW themeKey, int32_t expectedPrice, int32_t roomCount,
                                                            ::UnityEngine::Vector2Int gridPosition, ::GlobalNamespace::__AccountManager__OnPurchaseSuccess* onSuccess,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnPurchaseFailure* onFailure;

  /// @brief Field themeKey, offset: 0x30, size: 0x8, def value: None
  ::StringW themeKey;

  /// @brief Field expectedPrice, offset: 0x38, size: 0x4, def value: None
  int32_t expectedPrice;

  /// @brief Field roomCount, offset: 0x3c, size: 0x4, def value: None
  int32_t roomCount;

  /// @brief Field gridPosition, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Vector2Int gridPosition;

  /// @brief Field onSuccess, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnPurchaseSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager___TryExpandPrivateWorld_d__102, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryExpandPrivateWorld_d__102, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryExpandPrivateWorld_d__102, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryExpandPrivateWorld_d__102, onFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryExpandPrivateWorld_d__102, themeKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryExpandPrivateWorld_d__102, expectedPrice) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryExpandPrivateWorld_d__102, roomCount) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryExpandPrivateWorld_d__102, gridPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryExpandPrivateWorld_d__102, onSuccess) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryExpandPrivateWorld_d__102, __u__1) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<TryPurchaseCreatorPack>d__103
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountManager::<TryPurchaseCreatorPack>d__103
struct CORDL_TYPE __AccountManager___TryPurchaseCreatorPack_d__103 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c6e8bc, size 0x550, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c6ee0c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager___TryPurchaseCreatorPack_d__103();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::GlobalNamespace::__AccountManager__OnPurchaseFailure*",
  // modifiers: "", def_value: None }, CppParam { name: "expectedPrice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty:
  // "::GlobalNamespace::__AccountManager__OnPurchaseSuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __AccountManager___TryPurchaseCreatorPack_d__103(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                             ::GlobalNamespace::__AccountManager__OnPurchaseFailure* onFailure, int32_t expectedPrice,
                                                             ::GlobalNamespace::__AccountManager__OnPurchaseSuccess* onSuccess,
                                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnPurchaseFailure* onFailure;

  /// @brief Field expectedPrice, offset: 0x30, size: 0x4, def value: None
  int32_t expectedPrice;

  /// @brief Field onSuccess, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnPurchaseSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager___TryPurchaseCreatorPack_d__103, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchaseCreatorPack_d__103, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchaseCreatorPack_d__103, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchaseCreatorPack_d__103, onFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchaseCreatorPack_d__103, expectedPrice) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchaseCreatorPack_d__103, onSuccess) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchaseCreatorPack_d__103, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<AddCurrencyToDatabase>d__106
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountManager::<AddCurrencyToDatabase>d__106
struct CORDL_TYPE __AccountManager___AddCurrencyToDatabase_d__106 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c6ee18, size 0x46c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c6f284, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager___AddCurrencyToDatabase_d__106();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::GlobalNamespace::__AccountManager__OnCurrencyAddedFailure*",
  // modifiers: "", def_value: None }, CppParam { name: "sku", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty:
  // "::GlobalNamespace::__AccountManager__OnCurrencyAddedSuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __AccountManager___AddCurrencyToDatabase_d__106(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                            ::GlobalNamespace::__AccountManager__OnCurrencyAddedFailure* onFailure, ::StringW sku,
                                                            ::GlobalNamespace::__AccountManager__OnCurrencyAddedSuccess* onSuccess,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnCurrencyAddedFailure* onFailure;

  /// @brief Field sku, offset: 0x30, size: 0x8, def value: None
  ::StringW sku;

  /// @brief Field onSuccess, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnCurrencyAddedSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager___AddCurrencyToDatabase_d__106, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___AddCurrencyToDatabase_d__106, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___AddCurrencyToDatabase_d__106, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___AddCurrencyToDatabase_d__106, onFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___AddCurrencyToDatabase_d__106, sku) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___AddCurrencyToDatabase_d__106, onSuccess) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___AddCurrencyToDatabase_d__106, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<TryPurchaseBundle>d__109
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountManager::<TryPurchaseBundle>d__109
struct CORDL_TYPE __AccountManager___TryPurchaseBundle_d__109 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c6f290, size 0x5d8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c6f868, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager___TryPurchaseBundle_d__109();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::GlobalNamespace::__AccountManager__OnBundlePurchaseFailure*",
  // modifiers: "", def_value: None }, CppParam { name: "bundleKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty:
  // "::GlobalNamespace::__AccountManager__OnBundlePurchaseSuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __AccountManager___TryPurchaseBundle_d__109(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                        ::GlobalNamespace::__AccountManager__OnBundlePurchaseFailure* onFailure, ::StringW bundleKey,
                                                        ::GlobalNamespace::__AccountManager__OnBundlePurchaseSuccess* onSuccess,
                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnBundlePurchaseFailure* onFailure;

  /// @brief Field bundleKey, offset: 0x30, size: 0x8, def value: None
  ::StringW bundleKey;

  /// @brief Field onSuccess, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnBundlePurchaseSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager___TryPurchaseBundle_d__109, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchaseBundle_d__109, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchaseBundle_d__109, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchaseBundle_d__109, onFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchaseBundle_d__109, bundleKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchaseBundle_d__109, onSuccess) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___TryPurchaseBundle_d__109, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ResetCurrencyToDatabase>d__117
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountManager::<ResetCurrencyToDatabase>d__117
struct CORDL_TYPE __AccountManager___ResetCurrencyToDatabase_d__117 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c6f874, size 0x4b8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c6fd2c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager___ResetCurrencyToDatabase_d__117();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::GlobalNamespace::__AccountManager__OnCurrencyAddedFailure*",
  // modifiers: "", def_value: None }, CppParam { name: "newAmount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty:
  // "::GlobalNamespace::__AccountManager__OnCurrencyAddedSuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __AccountManager___ResetCurrencyToDatabase_d__117(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                              ::GlobalNamespace::__AccountManager__OnCurrencyAddedFailure* onFailure, int32_t newAmount,
                                                              ::GlobalNamespace::__AccountManager__OnCurrencyAddedSuccess* onSuccess,
                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnCurrencyAddedFailure* onFailure;

  /// @brief Field newAmount, offset: 0x30, size: 0x4, def value: None
  int32_t newAmount;

  /// @brief Field onSuccess, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnCurrencyAddedSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager___ResetCurrencyToDatabase_d__117, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___ResetCurrencyToDatabase_d__117, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___ResetCurrencyToDatabase_d__117, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___ResetCurrencyToDatabase_d__117, onFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___ResetCurrencyToDatabase_d__117, newAmount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___ResetCurrencyToDatabase_d__117, onSuccess) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___ResetCurrencyToDatabase_d__117, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ResetOwnedItemsToDatabase>d__120
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountManager::<ResetOwnedItemsToDatabase>d__120
struct CORDL_TYPE __AccountManager___ResetOwnedItemsToDatabase_d__120 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c6fd38, size 0x588, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c702c0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountManager___ResetOwnedItemsToDatabase_d__120();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::GlobalNamespace::__AccountManager__OnItemsResetFailure*",
  // modifiers: "", def_value: None }, CppParam { name: "newOwnedItemKeys", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "onSuccess",
  // ty: "::GlobalNamespace::__AccountManager__OnItemsResetSuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __AccountManager___ResetOwnedItemsToDatabase_d__120(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                ::GlobalNamespace::__AccountManager__OnItemsResetFailure* onFailure,
                                                                ::System::Collections::Generic::List_1<::StringW>* newOwnedItemKeys,
                                                                ::GlobalNamespace::__AccountManager__OnItemsResetSuccess* onSuccess,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnItemsResetFailure* onFailure;

  /// @brief Field newOwnedItemKeys, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* newOwnedItemKeys;

  /// @brief Field onSuccess, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnItemsResetSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountManager___ResetOwnedItemsToDatabase_d__120, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___ResetOwnedItemsToDatabase_d__120, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___ResetOwnedItemsToDatabase_d__120, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___ResetOwnedItemsToDatabase_d__120, onFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___ResetOwnedItemsToDatabase_d__120, newOwnedItemKeys) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___ResetOwnedItemsToDatabase_d__120, onSuccess) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountManager___ResetOwnedItemsToDatabase_d__120, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AccountManager
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountManager*
class CORDL_TYPE AccountManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::AccountManager>> {
public:
  // Declarations
  using OnAccountDataLoaded = ::GlobalNamespace::__AccountManager__OnAccountDataLoaded;

  using OnBanned = ::GlobalNamespace::__AccountManager__OnBanned;

  using OnBundlePurchaseFailure = ::GlobalNamespace::__AccountManager__OnBundlePurchaseFailure;

  using OnBundlePurchaseSuccess = ::GlobalNamespace::__AccountManager__OnBundlePurchaseSuccess;

  using OnCurrencyAddedFailure = ::GlobalNamespace::__AccountManager__OnCurrencyAddedFailure;

  using OnCurrencyAddedSuccess = ::GlobalNamespace::__AccountManager__OnCurrencyAddedSuccess;

  using OnCurrencyResetFailure = ::GlobalNamespace::__AccountManager__OnCurrencyResetFailure;

  using OnCurrencyResetSuccess = ::GlobalNamespace::__AccountManager__OnCurrencyResetSuccess;

  using OnFetchAccountDataFailed = ::GlobalNamespace::__AccountManager__OnFetchAccountDataFailed;

  using OnFetchAccountDataSuccess = ::GlobalNamespace::__AccountManager__OnFetchAccountDataSuccess;

  using OnItemsResetFailure = ::GlobalNamespace::__AccountManager__OnItemsResetFailure;

  using OnItemsResetSuccess = ::GlobalNamespace::__AccountManager__OnItemsResetSuccess;

  using OnLinkedToMobileAccount = ::GlobalNamespace::__AccountManager__OnLinkedToMobileAccount;

  using OnMobileAccountLinkFailed = ::GlobalNamespace::__AccountManager__OnMobileAccountLinkFailed;

  using OnMobileAccountLinkSuccess = ::GlobalNamespace::__AccountManager__OnMobileAccountLinkSuccess;

  using OnMobileCodeResetFailed = ::GlobalNamespace::__AccountManager__OnMobileCodeResetFailed;

  using OnMobileCodeResetSuccess = ::GlobalNamespace::__AccountManager__OnMobileCodeResetSuccess;

  using OnPurchaseFailure = ::GlobalNamespace::__AccountManager__OnPurchaseFailure;

  using OnPurchaseItemSuccess = ::GlobalNamespace::__AccountManager__OnPurchaseItemSuccess;

  using OnPurchaseSuccess = ::GlobalNamespace::__AccountManager__OnPurchaseSuccess;

  using OnUserIDAssigned = ::GlobalNamespace::__AccountManager__OnUserIDAssigned;

  using OnValidateMobileAccountFailed = ::GlobalNamespace::__AccountManager__OnValidateMobileAccountFailed;

  using OnValidateMobileAccountSuccess = ::GlobalNamespace::__AccountManager__OnValidateMobileAccountSuccess;

  using _AddCurrencyToDatabase_d__106 = ::GlobalNamespace::__AccountManager___AddCurrencyToDatabase_d__106;

  using _CheckGameCompatability_d__58 = ::GlobalNamespace::__AccountManager___CheckGameCompatability_d__58;

  using _CheckGuestGameAccess_d__57 = ::GlobalNamespace::__AccountManager___CheckGuestGameAccess_d__57;

  using _LinkMobileAccount_d__70 = ::GlobalNamespace::__AccountManager___LinkMobileAccount_d__70;

  using _LogIntoAccount_d__53 = ::GlobalNamespace::__AccountManager___LogIntoAccount_d__53;

  using _LogIntoMobileAccount_d__54 = ::GlobalNamespace::__AccountManager___LogIntoMobileAccount_d__54;

  using _LoginAsMobile_d__48 = ::GlobalNamespace::__AccountManager___LoginAsMobile_d__48;

  using _ResetCurrencyToDatabase_d__117 = ::GlobalNamespace::__AccountManager___ResetCurrencyToDatabase_d__117;

  using _ResetMobileCode_d__78 = ::GlobalNamespace::__AccountManager___ResetMobileCode_d__78;

  using _ResetOwnedItemsToDatabase_d__120 = ::GlobalNamespace::__AccountManager___ResetOwnedItemsToDatabase_d__120;

  using _SaveQueuedActiveCosmeticsToDatabase_d__96 = ::GlobalNamespace::__AccountManager___SaveQueuedActiveCosmeticsToDatabase_d__96;

  using _SkipLoginWithGuestAccount_d__49 = ::GlobalNamespace::__AccountManager___SkipLoginWithGuestAccount_d__49;

  using _TryExpandPrivateWorld_d__102 = ::GlobalNamespace::__AccountManager___TryExpandPrivateWorld_d__102;

  using _TryPurchaseBundle_d__109 = ::GlobalNamespace::__AccountManager___TryPurchaseBundle_d__109;

  using _TryPurchaseCreatorPack_d__103 = ::GlobalNamespace::__AccountManager___TryPurchaseCreatorPack_d__103;

  using _TryPurchasePrivateSandbox_d__101 = ::GlobalNamespace::__AccountManager___TryPurchasePrivateSandbox_d__101;

  using _TryPurchaseToDatabase_d__100 = ::GlobalNamespace::__AccountManager___TryPurchaseToDatabase_d__100;

  using _ValidateMobileAccount_d__81 = ::GlobalNamespace::__AccountManager___ValidateMobileAccount_d__81;

  using __c = ::GlobalNamespace::__AccountManager____c;

  using __c__DisplayClass48_0 = ::GlobalNamespace::__AccountManager____c__DisplayClass48_0;

  /// @brief Field <accountData>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__accountData_k__BackingField, put = setStaticF__accountData_k__BackingField))::GlobalNamespace::AccountData* _accountData_k__BackingField;

  /// @brief Field <accountID>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__accountID_k__BackingField, put = setStaticF__accountID_k__BackingField))::StringW _accountID_k__BackingField;

  /// @brief Field <hasCompletedTutorial>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__hasCompletedTutorial_k__BackingField, put = setStaticF__hasCompletedTutorial_k__BackingField)) bool _hasCompletedTutorial_k__BackingField;

  /// @brief Field <hasOnlineAccountData>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__hasOnlineAccountData_k__BackingField, put = setStaticF__hasOnlineAccountData_k__BackingField)) bool _hasOnlineAccountData_k__BackingField;

  /// @brief Field <hasOnlineUserID>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__hasOnlineUserID_k__BackingField, put = setStaticF__hasOnlineUserID_k__BackingField)) bool _hasOnlineUserID_k__BackingField;

  /// @brief Field <isGuest>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__isGuest_k__BackingField, put = setStaticF__isGuest_k__BackingField)) bool _isGuest_k__BackingField;

  /// @brief Field <userID>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__userID_k__BackingField, put = setStaticF__userID_k__BackingField))::StringW _userID_k__BackingField;

  /// @brief Field isFetchingAccountData, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isFetchingAccountData, put = setStaticF_isFetchingAccountData)) bool isFetchingAccountData;

  /// @brief Field nextSendActiveCosmeticsToDatabaseTime, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_nextSendActiveCosmeticsToDatabaseTime,
                      put = __cordl_internal_set_nextSendActiveCosmeticsToDatabaseTime)) float_t nextSendActiveCosmeticsToDatabaseTime;

  /// @brief Field onAccountDataLoadedCallbacks, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onAccountDataLoadedCallbacks,
                      put = __cordl_internal_set_onAccountDataLoadedCallbacks))::GlobalNamespace::__AccountManager__OnAccountDataLoaded* onAccountDataLoadedCallbacks;

  /// @brief Field onAccountDataLoadedPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onAccountDataLoadedPersistantCallbacks,
                             put = setStaticF_onAccountDataLoadedPersistantCallbacks))::GlobalNamespace::__AccountManager__OnAccountDataLoaded* onAccountDataLoadedPersistantCallbacks;

  /// @brief Field onBannedPersistentCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onBannedPersistentCallbacks, put = setStaticF_onBannedPersistentCallbacks))::GlobalNamespace::__AccountManager__OnBanned* onBannedPersistentCallbacks;

  /// @brief Field onLinkedToMobileAccountCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onLinkedToMobileAccountCallbacks,
                             put = setStaticF_onLinkedToMobileAccountCallbacks))::GlobalNamespace::__AccountManager__OnLinkedToMobileAccount* onLinkedToMobileAccountCallbacks;

  /// @brief Field onUserIDAssignedCallbacks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onUserIDAssignedCallbacks,
                      put = __cordl_internal_set_onUserIDAssignedCallbacks))::GlobalNamespace::__AccountManager__OnUserIDAssigned* onUserIDAssignedCallbacks;

  /// @brief Field onUserIDAssignedPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onUserIDAssignedPersistantCallbacks,
                             put = setStaticF_onUserIDAssignedPersistantCallbacks))::GlobalNamespace::__AccountManager__OnUserIDAssigned* onUserIDAssignedPersistantCallbacks;

  /// @brief Field queuedActiveCosmeticKeys, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_queuedActiveCosmeticKeys,
                      put = __cordl_internal_set_queuedActiveCosmeticKeys))::System::Collections::Generic::List_1<::StringW>* queuedActiveCosmeticKeys;

  /// @brief Method AddCurrencyToDatabase, addr 0x2e0f7c8, size 0xa8, virtual false, abstract: false, final false
  static inline void AddCurrencyToDatabase(::StringW sku, ::GlobalNamespace::__AccountManager__OnCurrencyAddedSuccess* onSuccess,
                                           ::GlobalNamespace::__AccountManager__OnCurrencyAddedFailure* onFailure);

  /// @brief Method AssignAccountID, addr 0x2e0c880, size 0x13c, virtual false, abstract: false, final false
  static inline void AssignAccountID(::StringW accountID);

  /// @brief Method AssignOfflineUserID, addr 0x2e0c520, size 0x40, virtual false, abstract: false, final false
  static inline void AssignOfflineUserID();

  /// @brief Method AssignUserID, addr 0x2e0c560, size 0x28c, virtual false, abstract: false, final false
  static inline void AssignUserID(::StringW userID);

  /// @brief Method CalculatePropertiesToGet, addr 0x2e0d8a8, size 0x998, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* CalculatePropertiesToGet();

  /// @brief Method CheckGameCompatability, addr 0x2e0ef70, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<bool>* CheckGameCompatability();

  /// @brief Method CheckGuestGameAccess, addr 0x2e0ee84, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<bool>* CheckGuestGameAccess();

  /// @brief Method ClearCachedMobileAccountData, addr 0x2dfde78, size 0x88, virtual false, abstract: false, final false
  static inline void ClearCachedMobileAccountData();

  /// @brief Method CompleteTutorial, addr 0x2e0f1fc, size 0x114, virtual false, abstract: false, final false
  static inline void CompleteTutorial();

  /// @brief Method GetCachedMobileAccountID, addr 0x2e0f05c, size 0x48, virtual false, abstract: false, final false
  static inline ::StringW GetCachedMobileAccountID();

  /// @brief Method GetCachedMobileCode, addr 0x2e0f0a4, size 0x48, virtual false, abstract: false, final false
  static inline ::StringW GetCachedMobileCode();

  /// @brief Method GetIsBanned, addr 0x2dfc758, size 0x64, virtual false, abstract: false, final false
  static inline bool GetIsBanned();

  /// @brief Method HasCachedMobileAccountData, addr 0x2e0097c, size 0x38, virtual false, abstract: false, final false
  static inline bool HasCachedMobileAccountData();

  /// @brief Method InitializeHasCompletedTutorial, addr 0x2e0d3b0, size 0x180, virtual false, abstract: false, final false
  static inline void InitializeHasCompletedTutorial();

  /// @brief Method IsGameAccessError, addr 0x2e0d718, size 0x108, virtual false, abstract: false, final false
  static inline bool IsGameAccessError(::StringW errorType);

  /// @brief Method LinkMobileAccount, addr 0x2e07f20, size 0xb4, virtual false, abstract: false, final false
  static inline void LinkMobileAccount(::StringW newOculusID, ::StringW newMobileCode, ::GlobalNamespace::__AccountManager__OnMobileAccountLinkSuccess* onSuccess,
                                       ::GlobalNamespace::__AccountManager__OnMobileAccountLinkFailed* onFailed);

  /// @brief Method LogIntoAccount, addr 0x2e0e240, size 0xc8, virtual false, abstract: false, final false
  inline void LogIntoAccount(::StringW accountID, ::StringW oculusID, ::StringW oculusNumber, ::GlobalNamespace::__AccountManager__OnFetchAccountDataSuccess* onSuccess,
                             ::GlobalNamespace::__AccountManager__OnFetchAccountDataFailed* onFailed);

  /// @brief Method LogIntoMobileAccount, addr 0x2e0e308, size 0xc0, virtual false, abstract: false, final false
  inline void LogIntoMobileAccount(::StringW accountID, ::StringW mobileCode, ::GlobalNamespace::__AccountManager__OnFetchAccountDataSuccess* onSuccess,
                                   ::GlobalNamespace::__AccountManager__OnFetchAccountDataFailed* onFailed);

  /// @brief Method LoginAsMobile, addr 0x2e0d530, size 0x90, virtual false, abstract: false, final false
  inline void LoginAsMobile();

  /// @brief Method LoginToOculusAccountOnDevice, addr 0x2e0d5c0, size 0x158, virtual false, abstract: false, final false
  inline void LoginToOculusAccountOnDevice();

  static inline ::GlobalNamespace::AccountManager* New_ctor();

  /// @brief Method OnApplicationQuit, addr 0x2e0f57c, size 0x10, virtual false, abstract: false, final false
  inline void OnApplicationQuit();

  /// @brief Method OnGameAccessDenied, addr 0x2e0ebdc, size 0x2a8, virtual false, abstract: false, final false
  static inline void OnGameAccessDenied(::StringW errType);

  /// @brief Method OnLocalPlayerWarned, addr 0x2e0d030, size 0x1bc, virtual false, abstract: false, final false
  static inline void OnLocalPlayerWarned(bool sendToFatalError, ::StringW reason);

  /// @brief Method OnRoomLoadedWhileNotCompletedTutorial, addr 0x2e0f310, size 0x178, virtual false, abstract: false, final false
  static inline void OnRoomLoadedWhileNotCompletedTutorial(::GlobalNamespace::Room* room);

  /// @brief Method QueueSaveActiveCosmeticsToDatabase, addr 0x2e0f488, size 0x28, virtual false, abstract: false, final false
  inline void QueueSaveActiveCosmeticsToDatabase(::System::Collections::Generic::List_1<::StringW>* cosmeticKeys, ::System::Collections::Generic::List_1<::StringW>* removedConflictingCosmeticKeys);

  /// @brief Method ResetCurrencyToDatabase, addr 0x2e0fad4, size 0xac, virtual false, abstract: false, final false
  static inline void ResetCurrencyToDatabase(int32_t newAmount, ::GlobalNamespace::__AccountManager__OnCurrencyAddedSuccess* onSuccess,
                                             ::GlobalNamespace::__AccountManager__OnCurrencyAddedFailure* onFailure);

  /// @brief Method ResetMobileCode, addr 0x2e050f4, size 0x9c, virtual false, abstract: false, final false
  static inline void ResetMobileCode(::GlobalNamespace::__AccountManager__OnMobileCodeResetSuccess* onSuccess, ::GlobalNamespace::__AccountManager__OnMobileCodeResetFailed* onFailure);

  /// @brief Method ResetOwnedItemsToDatabase, addr 0x2e0fb80, size 0xa8, virtual false, abstract: false, final false
  static inline void ResetOwnedItemsToDatabase(::System::Collections::Generic::List_1<::StringW>* newOwnedItemKeys, ::GlobalNamespace::__AccountManager__OnItemsResetSuccess* onSuccess,
                                               ::GlobalNamespace::__AccountManager__OnItemsResetFailure* onFailure);

  /// @brief Method SaveQueuedActiveCosmeticsToDatabase, addr 0x2e0f4e8, size 0x94, virtual false, abstract: false, final false
  inline void SaveQueuedActiveCosmeticsToDatabase();

  /// @brief Method SetAccountData, addr 0x2e0cb78, size 0x4b8, virtual false, abstract: false, final false
  static inline void SetAccountData(::GlobalNamespace::AccountData* newAccountData, bool isOnline);

  /// @brief Method SetCachedMobileAccountData, addr 0x2e0f0ec, size 0x7c, virtual false, abstract: false, final false
  static inline void SetCachedMobileAccountData(::StringW newAccountID, ::StringW newMobileCode);

  /// @brief Method SetLocalPlayerBanned, addr 0x2e0f918, size 0x1bc, virtual false, abstract: false, final false
  static inline void SetLocalPlayerBanned(::GlobalNamespace::__AccountData__BanType banType, int32_t banLengthHours, ::StringW banReason);

  /// @brief Method SkipLoginWithGuestAccount, addr 0x2e0d820, size 0x88, virtual false, abstract: false, final false
  inline void SkipLoginWithGuestAccount();

  /// @brief Method Start, addr 0x2e0d1ec, size 0x1c4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryExpandPrivateWorld, addr 0x2e0f6fc, size 0xcc, virtual false, abstract: false, final false
  static inline void TryExpandPrivateWorld(int32_t expectedPrice, ::StringW themeKey, ::UnityEngine::Vector2Int gridPosition, int32_t roomCount,
                                           ::GlobalNamespace::__AccountManager__OnPurchaseSuccess* onSuccess, ::GlobalNamespace::__AccountManager__OnPurchaseFailure* onFailure);

  /// @brief Method TryExtractAccountData, addr 0x2e0e3c8, size 0x814, virtual false, abstract: false, final false
  inline bool TryExtractAccountData(::GlobalNamespace::__AWSDatabase__LambdaResponse response, ByRef<::GlobalNamespace::AccountData*> accountData);

  /// @brief Method TryGetAccountData, addr 0x2e06ae0, size 0x58, virtual false, abstract: false, final false
  static inline bool TryGetAccountData(ByRef<::GlobalNamespace::AccountData*> accountData);

  /// @brief Method TryPurchaseBundle, addr 0x2e0f870, size 0xa8, virtual false, abstract: false, final false
  static inline void TryPurchaseBundle(::StringW bundleKey, ::GlobalNamespace::__AccountManager__OnBundlePurchaseSuccess* onSuccess,
                                       ::GlobalNamespace::__AccountManager__OnBundlePurchaseFailure* onFailure);

  /// @brief Method TryPurchaseCreatorPack, addr 0x2e070f4, size 0xac, virtual false, abstract: false, final false
  static inline void TryPurchaseCreatorPack(int32_t expectedPrice, ::GlobalNamespace::__AccountManager__OnPurchaseSuccess* onSuccess,
                                            ::GlobalNamespace::__AccountManager__OnPurchaseFailure* onFailure);

  /// @brief Method TryPurchasePrivateSandbox, addr 0x2e0f650, size 0xac, virtual false, abstract: false, final false
  static inline void TryPurchasePrivateSandbox(int32_t expectedPrice, ::GlobalNamespace::__AccountManager__OnPurchaseSuccess* onSuccess,
                                               ::GlobalNamespace::__AccountManager__OnPurchaseFailure* onFailure);

  /// @brief Method TryPurchaseToDatabase, addr 0x2e0f58c, size 0xc4, virtual false, abstract: false, final false
  static inline void TryPurchaseToDatabase(int32_t expectedPrice, ::StringW poolKey, ::StringW itemKey, ::GlobalNamespace::__AccountManager__OnPurchaseItemSuccess* onSuccess,
                                           ::GlobalNamespace::__AccountManager__OnPurchaseFailure* onFailure);

  /// @brief Method Update, addr 0x2e0f4b0, size 0x38, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method ValidateMobileAccount, addr 0x2dfdb2c, size 0x9c, virtual false, abstract: false, final false
  static inline void ValidateMobileAccount(::GlobalNamespace::__AccountManager__OnValidateMobileAccountSuccess* onSuccess,
                                           ::GlobalNamespace::__AccountManager__OnValidateMobileAccountFailed* onFailed);

  /// @brief Method <LoginToOculusAccountOnDevice>b__45_0, addr 0x2e0fc70, size 0x324, virtual false, abstract: false, final false
  inline void _LoginToOculusAccountOnDevice_b__45_0(::GlobalNamespace::OculusAccountData oculusAccountData);

  constexpr float_t const& __cordl_internal_get_nextSendActiveCosmeticsToDatabaseTime() const;

  constexpr float_t& __cordl_internal_get_nextSendActiveCosmeticsToDatabaseTime();

  constexpr ::GlobalNamespace::__AccountManager__OnAccountDataLoaded*& __cordl_internal_get_onAccountDataLoadedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AccountManager__OnAccountDataLoaded*> const& __cordl_internal_get_onAccountDataLoadedCallbacks() const;

  constexpr ::GlobalNamespace::__AccountManager__OnUserIDAssigned*& __cordl_internal_get_onUserIDAssignedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AccountManager__OnUserIDAssigned*> const& __cordl_internal_get_onUserIDAssignedCallbacks() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_queuedActiveCosmeticKeys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_queuedActiveCosmeticKeys() const;

  constexpr void __cordl_internal_set_nextSendActiveCosmeticsToDatabaseTime(float_t value);

  constexpr void __cordl_internal_set_onAccountDataLoadedCallbacks(::GlobalNamespace::__AccountManager__OnAccountDataLoaded* value);

  constexpr void __cordl_internal_set_onUserIDAssignedCallbacks(::GlobalNamespace::__AccountManager__OnUserIDAssigned* value);

  constexpr void __cordl_internal_set_queuedActiveCosmeticKeys(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x2e0fc28, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::AccountData* getStaticF__accountData_k__BackingField();

  static inline ::StringW getStaticF__accountID_k__BackingField();

  static inline bool getStaticF__hasCompletedTutorial_k__BackingField();

  static inline bool getStaticF__hasOnlineAccountData_k__BackingField();

  static inline bool getStaticF__hasOnlineUserID_k__BackingField();

  static inline bool getStaticF__isGuest_k__BackingField();

  static inline ::StringW getStaticF__userID_k__BackingField();

  static inline bool getStaticF_isFetchingAccountData();

  static inline ::GlobalNamespace::__AccountManager__OnAccountDataLoaded* getStaticF_onAccountDataLoadedPersistantCallbacks();

  static inline ::GlobalNamespace::__AccountManager__OnBanned* getStaticF_onBannedPersistentCallbacks();

  static inline ::GlobalNamespace::__AccountManager__OnLinkedToMobileAccount* getStaticF_onLinkedToMobileAccountCallbacks();

  static inline ::GlobalNamespace::__AccountManager__OnUserIDAssigned* getStaticF_onUserIDAssignedPersistantCallbacks();

  /// @brief Method get_accountData, addr 0x2e0c9bc, size 0x48, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::AccountData* get_accountData();

  /// @brief Method get_accountID, addr 0x2e0c7ec, size 0x48, virtual false, abstract: false, final false
  static inline ::StringW get_accountID();

  /// @brief Method get_hasAccountData, addr 0x2e04a24, size 0x48, virtual false, abstract: false, final false
  static inline bool get_hasAccountData();

  /// @brief Method get_hasAccountID, addr 0x2dfbae8, size 0x48, virtual false, abstract: false, final false
  static inline bool get_hasAccountID();

  /// @brief Method get_hasCompletedTutorial, addr 0x2e0f168, size 0x48, virtual false, abstract: false, final false
  static inline bool get_hasCompletedTutorial();

  /// @brief Method get_hasOnlineAccountData, addr 0x2e0ca50, size 0x48, virtual false, abstract: false, final false
  static inline bool get_hasOnlineAccountData();

  /// @brief Method get_hasOnlineUserID, addr 0x2e0c48c, size 0x48, virtual false, abstract: false, final false
  static inline bool get_hasOnlineUserID();

  /// @brief Method get_hasUserID, addr 0x2e0c444, size 0x48, virtual false, abstract: false, final false
  static inline bool get_hasUserID();

  /// @brief Method get_isGuest, addr 0x2e0cae4, size 0x48, virtual false, abstract: false, final false
  static inline bool get_isGuest();

  /// @brief Method get_userID, addr 0x2e0c3b0, size 0x48, virtual false, abstract: false, final false
  static inline ::StringW get_userID();

  static inline void setStaticF__accountData_k__BackingField(::GlobalNamespace::AccountData* value);

  static inline void setStaticF__accountID_k__BackingField(::StringW value);

  static inline void setStaticF__hasCompletedTutorial_k__BackingField(bool value);

  static inline void setStaticF__hasOnlineAccountData_k__BackingField(bool value);

  static inline void setStaticF__hasOnlineUserID_k__BackingField(bool value);

  static inline void setStaticF__isGuest_k__BackingField(bool value);

  static inline void setStaticF__userID_k__BackingField(::StringW value);

  static inline void setStaticF_isFetchingAccountData(bool value);

  static inline void setStaticF_onAccountDataLoadedPersistantCallbacks(::GlobalNamespace::__AccountManager__OnAccountDataLoaded* value);

  static inline void setStaticF_onBannedPersistentCallbacks(::GlobalNamespace::__AccountManager__OnBanned* value);

  static inline void setStaticF_onLinkedToMobileAccountCallbacks(::GlobalNamespace::__AccountManager__OnLinkedToMobileAccount* value);

  static inline void setStaticF_onUserIDAssignedPersistantCallbacks(::GlobalNamespace::__AccountManager__OnUserIDAssigned* value);

  /// @brief Method set_accountData, addr 0x2e0ca04, size 0x4c, virtual false, abstract: false, final false
  static inline void set_accountData(::GlobalNamespace::AccountData* value);

  /// @brief Method set_accountID, addr 0x2e0c834, size 0x4c, virtual false, abstract: false, final false
  static inline void set_accountID(::StringW value);

  /// @brief Method set_hasCompletedTutorial, addr 0x2e0f1b0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_hasCompletedTutorial(bool value);

  /// @brief Method set_hasOnlineAccountData, addr 0x2e0ca98, size 0x4c, virtual false, abstract: false, final false
  static inline void set_hasOnlineAccountData(bool value);

  /// @brief Method set_hasOnlineUserID, addr 0x2e0c4d4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_hasOnlineUserID(bool value);

  /// @brief Method set_isGuest, addr 0x2e0cb2c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_isGuest(bool value);

  /// @brief Method set_userID, addr 0x2e0c3f8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_userID(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AccountManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AccountManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AccountManager(AccountManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AccountManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AccountManager(AccountManager const&) = delete;

  /// @brief Field onUserIDAssignedCallbacks, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnUserIDAssigned* ___onUserIDAssignedCallbacks;

  /// @brief Field onAccountDataLoadedCallbacks, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__AccountManager__OnAccountDataLoaded* ___onAccountDataLoadedCallbacks;

  /// @brief Field queuedActiveCosmeticKeys, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___queuedActiveCosmeticKeys;

  /// @brief Field nextSendActiveCosmeticsToDatabaseTime, offset: 0x30, size: 0x4, def value: None
  float_t ___nextSendActiveCosmeticsToDatabaseTime;

  /// @brief Field CACHED_MOBILE_ACCOUNT_ID_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString CACHED_MOBILE_ACCOUNT_ID_KEY{ u"cachedMobileAccountID" };

  /// @brief Field CACHED_MOBILE_CODE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString CACHED_MOBILE_CODE_KEY{ u"cachedMobileCode" };

  /// @brief Field GAME_ACCESS_ERROR_GAME_CLOSED offset 0xffffffff size 0x8
  static constexpr ::ConstString GAME_ACCESS_ERROR_GAME_CLOSED{ u"GAME_CLOSED" };

  /// @brief Field GAME_ACCESS_ERROR_NOT_ALPHA_TESTER offset 0xffffffff size 0x8
  static constexpr ::ConstString GAME_ACCESS_ERROR_NOT_ALPHA_TESTER{ u"NOT_ALPHA_TESTER" };

  /// @brief Field GAME_ACCESS_ERROR_NO_ALPHA_TEST offset 0xffffffff size 0x8
  static constexpr ::ConstString GAME_ACCESS_ERROR_NO_ALPHA_TEST{ u"NO_ALPHA_TEST" };

  /// @brief Field GAME_ACCESS_INCOMPATIBLE_VERSION offset 0xffffffff size 0x8
  static constexpr ::ConstString GAME_ACCESS_INCOMPATIBLE_VERSION{ u"INCOMPATIBLE_VERSION" };

  /// @brief Field GAME_ACCESS_SECRET_PREPARATIONS offset 0xffffffff size 0x8
  static constexpr ::ConstString GAME_ACCESS_SECRET_PREPARATIONS{ u"SECRET_PREPARATIONS" };

  /// @brief Field MOBILE_CODE_LENGTH offset 0xffffffff size 0x4
  static constexpr int32_t MOBILE_CODE_LENGTH{ static_cast<int32_t>(0x4) };

  /// @brief Field QUEUE_ACTIVE_COSMETICS_DELAY offset 0xffffffff size 0x4
  static constexpr float_t QUEUE_ACTIVE_COSMETICS_DELAY{ 15.0 };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Account: " };

  /// @brief Field hasCompletedTutorialPlayerPrefsKey offset 0xffffffff size 0x8
  static constexpr ::ConstString hasCompletedTutorialPlayerPrefsKey{ u"hasCompletedTutorial" };

  /// @brief Field offlineUserID offset 0xffffffff size 0x8
  static constexpr ::ConstString offlineUserID{ u"offline" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AccountManager, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountManager, ___onUserIDAssignedCallbacks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountManager, ___onAccountDataLoadedCallbacks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountManager, ___queuedActiveCosmeticKeys) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountManager, ___nextSendActiveCosmeticsToDatabaseTime) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AccountManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AccountManager*, "", "AccountManager");
NEED_NO_BOX(::GlobalNamespace::__AccountManager__OnAccountDataLoaded);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager__OnAccountDataLoaded*, "", "AccountManager/OnAccountDataLoaded");
NEED_NO_BOX(::GlobalNamespace::__AccountManager__OnBanned);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager__OnBanned*, "", "AccountManager/OnBanned");
NEED_NO_BOX(::GlobalNamespace::__AccountManager__OnBundlePurchaseFailure);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager__OnBundlePurchaseFailure*, "", "AccountManager/OnBundlePurchaseFailure");
NEED_NO_BOX(::GlobalNamespace::__AccountManager__OnBundlePurchaseSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager__OnBundlePurchaseSuccess*, "", "AccountManager/OnBundlePurchaseSuccess");
NEED_NO_BOX(::GlobalNamespace::__AccountManager__OnCurrencyAddedFailure);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager__OnCurrencyAddedFailure*, "", "AccountManager/OnCurrencyAddedFailure");
NEED_NO_BOX(::GlobalNamespace::__AccountManager__OnCurrencyAddedSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager__OnCurrencyAddedSuccess*, "", "AccountManager/OnCurrencyAddedSuccess");
NEED_NO_BOX(::GlobalNamespace::__AccountManager__OnCurrencyResetFailure);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager__OnCurrencyResetFailure*, "", "AccountManager/OnCurrencyResetFailure");
NEED_NO_BOX(::GlobalNamespace::__AccountManager__OnCurrencyResetSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager__OnCurrencyResetSuccess*, "", "AccountManager/OnCurrencyResetSuccess");
NEED_NO_BOX(::GlobalNamespace::__AccountManager__OnFetchAccountDataFailed);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager__OnFetchAccountDataFailed*, "", "AccountManager/OnFetchAccountDataFailed");
NEED_NO_BOX(::GlobalNamespace::__AccountManager__OnFetchAccountDataSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager__OnFetchAccountDataSuccess*, "", "AccountManager/OnFetchAccountDataSuccess");
NEED_NO_BOX(::GlobalNamespace::__AccountManager__OnItemsResetFailure);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager__OnItemsResetFailure*, "", "AccountManager/OnItemsResetFailure");
NEED_NO_BOX(::GlobalNamespace::__AccountManager__OnItemsResetSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager__OnItemsResetSuccess*, "", "AccountManager/OnItemsResetSuccess");
NEED_NO_BOX(::GlobalNamespace::__AccountManager__OnLinkedToMobileAccount);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager__OnLinkedToMobileAccount*, "", "AccountManager/OnLinkedToMobileAccount");
NEED_NO_BOX(::GlobalNamespace::__AccountManager__OnMobileAccountLinkFailed);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager__OnMobileAccountLinkFailed*, "", "AccountManager/OnMobileAccountLinkFailed");
NEED_NO_BOX(::GlobalNamespace::__AccountManager__OnMobileAccountLinkSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager__OnMobileAccountLinkSuccess*, "", "AccountManager/OnMobileAccountLinkSuccess");
NEED_NO_BOX(::GlobalNamespace::__AccountManager__OnMobileCodeResetFailed);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager__OnMobileCodeResetFailed*, "", "AccountManager/OnMobileCodeResetFailed");
NEED_NO_BOX(::GlobalNamespace::__AccountManager__OnMobileCodeResetSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager__OnMobileCodeResetSuccess*, "", "AccountManager/OnMobileCodeResetSuccess");
NEED_NO_BOX(::GlobalNamespace::__AccountManager__OnPurchaseFailure);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager__OnPurchaseFailure*, "", "AccountManager/OnPurchaseFailure");
NEED_NO_BOX(::GlobalNamespace::__AccountManager__OnPurchaseItemSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager__OnPurchaseItemSuccess*, "", "AccountManager/OnPurchaseItemSuccess");
NEED_NO_BOX(::GlobalNamespace::__AccountManager__OnPurchaseSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager__OnPurchaseSuccess*, "", "AccountManager/OnPurchaseSuccess");
NEED_NO_BOX(::GlobalNamespace::__AccountManager__OnUserIDAssigned);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager__OnUserIDAssigned*, "", "AccountManager/OnUserIDAssigned");
NEED_NO_BOX(::GlobalNamespace::__AccountManager__OnValidateMobileAccountFailed);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager__OnValidateMobileAccountFailed*, "", "AccountManager/OnValidateMobileAccountFailed");
NEED_NO_BOX(::GlobalNamespace::__AccountManager__OnValidateMobileAccountSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager__OnValidateMobileAccountSuccess*, "", "AccountManager/OnValidateMobileAccountSuccess");
NEED_NO_BOX(::GlobalNamespace::__AccountManager____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager____c*, "", "AccountManager/<>c");
NEED_NO_BOX(::GlobalNamespace::__AccountManager____c__DisplayClass48_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager____c__DisplayClass48_0*, "", "AccountManager/<>c__DisplayClass48_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager___AddCurrencyToDatabase_d__106, "", "AccountManager/<AddCurrencyToDatabase>d__106");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager___CheckGameCompatability_d__58, "", "AccountManager/<CheckGameCompatability>d__58");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager___CheckGuestGameAccess_d__57, "", "AccountManager/<CheckGuestGameAccess>d__57");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager___LinkMobileAccount_d__70, "", "AccountManager/<LinkMobileAccount>d__70");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager___LogIntoAccount_d__53, "", "AccountManager/<LogIntoAccount>d__53");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager___LogIntoMobileAccount_d__54, "", "AccountManager/<LogIntoMobileAccount>d__54");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager___LoginAsMobile_d__48, "", "AccountManager/<LoginAsMobile>d__48");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager___ResetCurrencyToDatabase_d__117, "", "AccountManager/<ResetCurrencyToDatabase>d__117");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager___ResetMobileCode_d__78, "", "AccountManager/<ResetMobileCode>d__78");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager___ResetOwnedItemsToDatabase_d__120, "", "AccountManager/<ResetOwnedItemsToDatabase>d__120");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager___SaveQueuedActiveCosmeticsToDatabase_d__96, "", "AccountManager/<SaveQueuedActiveCosmeticsToDatabase>d__96");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager___SkipLoginWithGuestAccount_d__49, "", "AccountManager/<SkipLoginWithGuestAccount>d__49");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager___TryExpandPrivateWorld_d__102, "", "AccountManager/<TryExpandPrivateWorld>d__102");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager___TryPurchaseBundle_d__109, "", "AccountManager/<TryPurchaseBundle>d__109");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager___TryPurchaseCreatorPack_d__103, "", "AccountManager/<TryPurchaseCreatorPack>d__103");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager___TryPurchasePrivateSandbox_d__101, "", "AccountManager/<TryPurchasePrivateSandbox>d__101");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager___TryPurchaseToDatabase_d__100, "", "AccountManager/<TryPurchaseToDatabase>d__100");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountManager___ValidateMobileAccount_d__81, "", "AccountManager/<ValidateMobileAccount>d__81");
