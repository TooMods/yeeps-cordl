#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AWSDatabase_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AccountsDatabase)
namespace Amazon::DynamoDBv2::Model {
class AttributeValueUpdate;
}
namespace GlobalNamespace {
class AccountData;
}
namespace GlobalNamespace {
struct __AWSDatabase__BatchDynamoResponse;
}
namespace GlobalNamespace {
struct __AWSDatabase__DynamoResponse;
}
namespace GlobalNamespace {
struct __AWSDatabase__QueryDynamoResponse;
}
namespace GlobalNamespace {
struct __AWSDatabase__UpdateDynamoResponse;
}
namespace GlobalNamespace {
class __AccountsDatabase__OnFetchAccountDataFailed;
}
namespace GlobalNamespace {
class __AccountsDatabase__OnFetchAccountDataSuccess;
}
namespace GlobalNamespace {
struct __AccountsDatabase___AddCosmeticToAccount_d__36;
}
namespace GlobalNamespace {
struct __AccountsDatabase___BatchFetchAccountDatas_d__33;
}
namespace GlobalNamespace {
struct __AccountsDatabase___FetchAccountData_d__32;
}
namespace GlobalNamespace {
struct __AccountsDatabase___QueryOculusName_d__34;
}
namespace GlobalNamespace {
struct __AccountsDatabase___UpdateAccount_d__35;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
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
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class AccountsDatabase;
}
namespace GlobalNamespace {
class __AccountsDatabase__OnFetchAccountDataFailed;
}
namespace GlobalNamespace {
class __AccountsDatabase__OnFetchAccountDataSuccess;
}
namespace GlobalNamespace {
struct __AccountsDatabase___AddCosmeticToAccount_d__36;
}
namespace GlobalNamespace {
struct __AccountsDatabase___BatchFetchAccountDatas_d__33;
}
namespace GlobalNamespace {
struct __AccountsDatabase___FetchAccountData_d__32;
}
namespace GlobalNamespace {
struct __AccountsDatabase___QueryOculusName_d__34;
}
namespace GlobalNamespace {
struct __AccountsDatabase___UpdateAccount_d__35;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AccountsDatabase);
MARK_REF_PTR_T(::GlobalNamespace::__AccountsDatabase__OnFetchAccountDataFailed);
MARK_REF_PTR_T(::GlobalNamespace::__AccountsDatabase__OnFetchAccountDataSuccess);
MARK_VAL_T(::GlobalNamespace::__AccountsDatabase___AddCosmeticToAccount_d__36);
MARK_VAL_T(::GlobalNamespace::__AccountsDatabase___BatchFetchAccountDatas_d__33);
MARK_VAL_T(::GlobalNamespace::__AccountsDatabase___FetchAccountData_d__32);
MARK_VAL_T(::GlobalNamespace::__AccountsDatabase___QueryOculusName_d__34);
MARK_VAL_T(::GlobalNamespace::__AccountsDatabase___UpdateAccount_d__35);
// Type: ::OnFetchAccountDataSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountsDatabase::OnFetchAccountDataSuccess*
class CORDL_TYPE __AccountsDatabase__OnFetchAccountDataSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2c71d4c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::AccountData* accountData, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2c71d6c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2c71d38, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::AccountData* accountData);

  static inline ::GlobalNamespace::__AccountsDatabase__OnFetchAccountDataSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2c71c0c, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountsDatabase__OnFetchAccountDataSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountsDatabase__OnFetchAccountDataSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountsDatabase__OnFetchAccountDataSuccess(__AccountsDatabase__OnFetchAccountDataSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountsDatabase__OnFetchAccountDataSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountsDatabase__OnFetchAccountDataSuccess(__AccountsDatabase__OnFetchAccountDataSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountsDatabase__OnFetchAccountDataSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnFetchAccountDataFailed
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountsDatabase::OnFetchAccountDataFailed*
class CORDL_TYPE __AccountsDatabase__OnFetchAccountDataFailed : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2c71e60, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2c71e80, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2c71e4c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errType);

  static inline ::GlobalNamespace::__AccountsDatabase__OnFetchAccountDataFailed* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2c71d78, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountsDatabase__OnFetchAccountDataFailed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountsDatabase__OnFetchAccountDataFailed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountsDatabase__OnFetchAccountDataFailed(__AccountsDatabase__OnFetchAccountDataFailed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountsDatabase__OnFetchAccountDataFailed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountsDatabase__OnFetchAccountDataFailed(__AccountsDatabase__OnFetchAccountDataFailed const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountsDatabase__OnFetchAccountDataFailed, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<FetchAccountData>d__32
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountsDatabase::<FetchAccountData>d__32
struct CORDL_TYPE __AccountsDatabase___FetchAccountData_d__32 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c71e8c, size 0x25c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c720e8, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountsDatabase___FetchAccountData_d__32();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: None }, CppParam { name: "accountID", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "attributesToGet", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: None }]
  constexpr __AccountsDatabase___FetchAccountData_d__32(int32_t __1__state,
                                                        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __t__builder,
                                                        ::StringW accountID, ::System::Collections::Generic::List_1<::StringW>* attributesToGet,
                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __t__builder;

  /// @brief Field accountID, offset: 0x20, size: 0x8, def value: None
  ::StringW accountID;

  /// @brief Field attributesToGet, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* attributesToGet;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountsDatabase___FetchAccountData_d__32, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___FetchAccountData_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___FetchAccountData_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___FetchAccountData_d__32, accountID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___FetchAccountData_d__32, attributesToGet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___FetchAccountData_d__32, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<BatchFetchAccountDatas>d__33
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountsDatabase::<BatchFetchAccountDatas>d__33
struct CORDL_TYPE __AccountsDatabase___BatchFetchAccountDatas_d__33 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c72140, size 0x25c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c7239c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountsDatabase___BatchFetchAccountDatas_d__33();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse>", modifiers: "", def_value: None }, CppParam { name: "accountIDs", ty:
  // "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "attributesToGet", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse>", modifiers: "", def_value: None
  // }]
  constexpr __AccountsDatabase___BatchFetchAccountDatas_d__33(int32_t __1__state,
                                                              ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse> __t__builder,
                                                              ::System::Collections::Generic::List_1<::StringW>* accountIDs, ::System::Collections::Generic::List_1<::StringW>* attributesToGet,
                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse> __t__builder;

  /// @brief Field accountIDs, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* accountIDs;

  /// @brief Field attributesToGet, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* attributesToGet;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountsDatabase___BatchFetchAccountDatas_d__33, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___BatchFetchAccountDatas_d__33, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___BatchFetchAccountDatas_d__33, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___BatchFetchAccountDatas_d__33, accountIDs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___BatchFetchAccountDatas_d__33, attributesToGet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___BatchFetchAccountDatas_d__33, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<QueryOculusName>d__34
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountsDatabase::<QueryOculusName>d__34
struct CORDL_TYPE __AccountsDatabase___QueryOculusName_d__34 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c723f4, size 0x278, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c7266c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountsDatabase___QueryOculusName_d__34();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>", modifiers: "", def_value: None }, CppParam { name: "oculusName", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "limit", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>", modifiers: "", def_value: None }]
  constexpr __AccountsDatabase___QueryOculusName_d__34(int32_t __1__state,
                                                       ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse> __t__builder,
                                                       ::StringW oculusName, int32_t limit,
                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse> __t__builder;

  /// @brief Field oculusName, offset: 0x20, size: 0x8, def value: None
  ::StringW oculusName;

  /// @brief Field limit, offset: 0x28, size: 0x4, def value: None
  int32_t limit;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountsDatabase___QueryOculusName_d__34, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___QueryOculusName_d__34, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___QueryOculusName_d__34, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___QueryOculusName_d__34, oculusName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___QueryOculusName_d__34, limit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___QueryOculusName_d__34, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<UpdateAccount>d__35
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountsDatabase::<UpdateAccount>d__35
struct CORDL_TYPE __AccountsDatabase___UpdateAccount_d__35 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c726c4, size 0x244, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c72908, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountsDatabase___UpdateAccount_d__35();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>", modifiers: "", def_value: None }, CppParam { name: "accountID", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "updates", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::Amazon::DynamoDBv2::Model::AttributeValueUpdate*>*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>", modifiers: "",
  // def_value: None }]
  constexpr __AccountsDatabase___UpdateAccount_d__35(int32_t __1__state,
                                                     ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse> __t__builder,
                                                     ::StringW accountID, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValueUpdate*>* updates,
                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse> __t__builder;

  /// @brief Field accountID, offset: 0x20, size: 0x8, def value: None
  ::StringW accountID;

  /// @brief Field updates, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValueUpdate*>* updates;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountsDatabase___UpdateAccount_d__35, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___UpdateAccount_d__35, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___UpdateAccount_d__35, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___UpdateAccount_d__35, accountID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___UpdateAccount_d__35, updates) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___UpdateAccount_d__35, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<AddCosmeticToAccount>d__36
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountsDatabase::<AddCosmeticToAccount>d__36
struct CORDL_TYPE __AccountsDatabase___AddCosmeticToAccount_d__36 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c72960, size 0x364, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c72cc4, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountsDatabase___AddCosmeticToAccount_d__36();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>", modifiers: "", def_value: None }, CppParam { name: "cosmeticKey", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "accountID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>", modifiers: "", def_value: None }]
  constexpr __AccountsDatabase___AddCosmeticToAccount_d__36(int32_t __1__state,
                                                            ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse> __t__builder,
                                                            ::StringW cosmeticKey, ::StringW accountID,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse> __t__builder;

  /// @brief Field cosmeticKey, offset: 0x20, size: 0x8, def value: None
  ::StringW cosmeticKey;

  /// @brief Field accountID, offset: 0x28, size: 0x8, def value: None
  ::StringW accountID;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountsDatabase___AddCosmeticToAccount_d__36, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___AddCosmeticToAccount_d__36, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___AddCosmeticToAccount_d__36, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___AddCosmeticToAccount_d__36, cosmeticKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___AddCosmeticToAccount_d__36, accountID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountsDatabase___AddCosmeticToAccount_d__36, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AccountsDatabase
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountsDatabase*
class CORDL_TYPE AccountsDatabase : public ::System::Object {
public:
  // Declarations
  using OnFetchAccountDataFailed = ::GlobalNamespace::__AccountsDatabase__OnFetchAccountDataFailed;

  using OnFetchAccountDataSuccess = ::GlobalNamespace::__AccountsDatabase__OnFetchAccountDataSuccess;

  using _AddCosmeticToAccount_d__36 = ::GlobalNamespace::__AccountsDatabase___AddCosmeticToAccount_d__36;

  using _BatchFetchAccountDatas_d__33 = ::GlobalNamespace::__AccountsDatabase___BatchFetchAccountDatas_d__33;

  using _FetchAccountData_d__32 = ::GlobalNamespace::__AccountsDatabase___FetchAccountData_d__32;

  using _QueryOculusName_d__34 = ::GlobalNamespace::__AccountsDatabase___QueryOculusName_d__34;

  using _UpdateAccount_d__35 = ::GlobalNamespace::__AccountsDatabase___UpdateAccount_d__35;

  /// @brief Method AddCosmeticToAccount, addr 0x2c71b08, size 0x104, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>* AddCosmeticToAccount(::StringW accountID, ::StringW cosmeticKey);

  /// @brief Method BatchFetchAccountDatas, addr 0x2c717fc, size 0x104, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse>* BatchFetchAccountDatas(::System::Collections::Generic::List_1<::StringW>* accountIDs,
                                                                                                                                  ::System::Collections::Generic::List_1<::StringW>* attributesToGet);

  /// @brief Method FetchAccountData, addr 0x2c70e58, size 0x104, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>* FetchAccountData(::StringW accountID,
                                                                                                                       ::System::Collections::Generic::List_1<::StringW>* attributesToGet);

  /// @brief Method GetChallengeRedeemedTimeKey, addr 0x2c717b0, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetChallengeRedeemedTimeKey(::StringW poolKey);

  /// @brief Method QueryOculusName, addr 0x2c71900, size 0x104, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>* QueryOculusName(::StringW oculusName, int32_t limit);

  /// @brief Method UpdateAccount, addr 0x2c71a04, size 0x104, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>*
  UpdateAccount(::StringW accountID, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValueUpdate*>* updates);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AccountsDatabase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AccountsDatabase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AccountsDatabase(AccountsDatabase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AccountsDatabase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AccountsDatabase(AccountsDatabase const&) = delete;

  /// @brief Field ACCOUNTS_TABLE offset 0xffffffff size 0x8
  static constexpr ::ConstString ACCOUNTS_TABLE{ u"G2_Accounts" };

  /// @brief Field ACCOUNT_CREATED_TIME_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ACCOUNT_CREATED_TIME_KEY{ u"firstLogin" };

  /// @brief Field ACTIVE_COSMETICS_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ACTIVE_COSMETICS_KEY{ u"activeCosmetics" };

  /// @brief Field ANALYTIC_EVENT_KEYS_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ANALYTIC_EVENT_KEYS_KEY{ u"analyticEventKeys" };

  /// @brief Field BAN_COUNT_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString BAN_COUNT_KEY{ u"banCount" };

  /// @brief Field BAN_REASON_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString BAN_REASON_KEY{ u"banReason" };

  /// @brief Field CURRENCY_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString CURRENCY_KEY{ u"currency" };

  /// @brief Field DISPLAY_NAME_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString DISPLAY_NAME_KEY{ u"displayName" };

  /// @brief Field EYE_COLOR_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString EYE_COLOR_KEY{ u"eyeColor" };

  /// @brief Field HAS_CREATOR_PACK_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString HAS_CREATOR_PACK_KEY{ u"hasCreatorPack" };

  /// @brief Field HAS_PENDING_WARNING_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString HAS_PENDING_WARNING_KEY{ u"hasPendingWarning" };

  /// @brief Field HAS_UNLOCKED_PRIVATE_ROOMS_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString HAS_UNLOCKED_PRIVATE_ROOMS_KEY{ u"hasUnlockedPrivateRooms" };

  /// @brief Field IS_ISOLATED_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString IS_ISOLATED_KEY{ u"isIsolated" };

  /// @brief Field IS_PERMABANNED_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString IS_PERMABANNED_KEY{ u"isPermabanned" };

  /// @brief Field LAST_REDEEMED_TIME_KEY_PREFIX offset 0xffffffff size 0x8
  static constexpr ::ConstString LAST_REDEEMED_TIME_KEY_PREFIX{ u"lastChallengeRedeemedTime" };

  /// @brief Field LONGEST_BAN_DURATION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString LONGEST_BAN_DURATION_KEY{ u"longestBanDuration" };

  /// @brief Field MOBILE_CODE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString MOBILE_CODE_KEY{ u"mobileCode" };

  /// @brief Field OCULUS_ID_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString OCULUS_ID_KEY{ u"oculusID" };

  /// @brief Field OWNED_BUNDLES_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString OWNED_BUNDLES_KEY{ u"ownedBundles" };

  /// @brief Field OWNED_PATTERNS_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString OWNED_PATTERNS_KEY{ u"ownedPatterns" };

  /// @brief Field PERMABAN_DURATION offset 0xffffffff size 0x4
  static constexpr int32_t PERMABAN_DURATION{ static_cast<int32_t>(0x1869f) };

  /// @brief Field PRIMARY_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString PRIMARY_KEY{ u"accountID" };

  /// @brief Field REDEEMED_CURRENCY_STASH_IDS_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString REDEEMED_CURRENCY_STASH_IDS_KEY{ u"redeemedStashIDs" };

  /// @brief Field REMAINING_BAN_HOURS_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString REMAINING_BAN_HOURS_KEY{ u"remainingBanHours" };

  /// @brief Field REPORT_COUNT_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString REPORT_COUNT_KEY{ u"reportCount" };

  /// @brief Field ROLE_KEYS_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROLE_KEYS_KEY{ u"roleKeys" };

  /// @brief Field SERVER_TIME_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString SERVER_TIME_KEY{ u"serverTime" };

  /// @brief Field SHOULD_FORCE_REFRESH_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString SHOULD_FORCE_REFRESH_KEY{ u"shouldForceRefresh" };

  /// @brief Field SKIN_COLOR_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString SKIN_COLOR_KEY{ u"skinColor" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AccountsDatabase, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AccountsDatabase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AccountsDatabase*, "", "AccountsDatabase");
NEED_NO_BOX(::GlobalNamespace::__AccountsDatabase__OnFetchAccountDataFailed);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountsDatabase__OnFetchAccountDataFailed*, "", "AccountsDatabase/OnFetchAccountDataFailed");
NEED_NO_BOX(::GlobalNamespace::__AccountsDatabase__OnFetchAccountDataSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountsDatabase__OnFetchAccountDataSuccess*, "", "AccountsDatabase/OnFetchAccountDataSuccess");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountsDatabase___AddCosmeticToAccount_d__36, "", "AccountsDatabase/<AddCosmeticToAccount>d__36");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountsDatabase___BatchFetchAccountDatas_d__33, "", "AccountsDatabase/<BatchFetchAccountDatas>d__33");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountsDatabase___FetchAccountData_d__32, "", "AccountsDatabase/<FetchAccountData>d__32");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountsDatabase___QueryOculusName_d__34, "", "AccountsDatabase/<QueryOculusName>d__34");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountsDatabase___UpdateAccount_d__35, "", "AccountsDatabase/<UpdateAccount>d__35");
