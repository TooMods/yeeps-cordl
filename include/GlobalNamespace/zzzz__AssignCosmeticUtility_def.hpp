#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AWSDatabase_def.hpp"
#include "GlobalNamespace/zzzz__DatabaseUtility_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssignCosmeticUtility)
namespace GlobalNamespace {
struct __AWSDatabase__LambdaResponse;
}
namespace GlobalNamespace {
struct __AssignCosmeticUtility___GiveCosmeticToAccountIDs_d__6;
}
namespace GlobalNamespace {
struct __AssignCosmeticUtility___HandleUtility_d__5;
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
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class AssignCosmeticUtility;
}
namespace GlobalNamespace {
struct __AssignCosmeticUtility___GiveCosmeticToAccountIDs_d__6;
}
namespace GlobalNamespace {
struct __AssignCosmeticUtility___HandleUtility_d__5;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AssignCosmeticUtility);
MARK_VAL_T(::GlobalNamespace::__AssignCosmeticUtility___GiveCosmeticToAccountIDs_d__6);
MARK_VAL_T(::GlobalNamespace::__AssignCosmeticUtility___HandleUtility_d__5);
// Type: ::<HandleUtility>d__5
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AssignCosmeticUtility::<HandleUtility>d__5
struct CORDL_TYPE __AssignCosmeticUtility___HandleUtility_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x276c120, size 0x54, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x276c174, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AssignCosmeticUtility___HandleUtility_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }]
  constexpr __AssignCosmeticUtility___HandleUtility_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AssignCosmeticUtility___HandleUtility_d__5, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AssignCosmeticUtility___HandleUtility_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AssignCosmeticUtility___HandleUtility_d__5, __t__builder) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GiveCosmeticToAccountIDs>d__6
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AssignCosmeticUtility::<GiveCosmeticToAccountIDs>d__6
struct CORDL_TYPE __AssignCosmeticUtility___GiveCosmeticToAccountIDs_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x276c1cc, size 0x47c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x276c648, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AssignCosmeticUtility___GiveCosmeticToAccountIDs_d__6();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::AssignCosmeticUtility>", modifiers: "", def_value: None }, CppParam { name: "accountIDs", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "",
  // def_value: None }, CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __AssignCosmeticUtility___GiveCosmeticToAccountIDs_d__6(int32_t __1__state,
                                                                    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::StringW>*> __t__builder,
                                                                    ::UnityW<::GlobalNamespace::AssignCosmeticUtility> __4__this, ::System::Collections::Generic::List_1<::StringW>* accountIDs,
                                                                    ::StringW password,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::StringW>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AssignCosmeticUtility> __4__this;

  /// @brief Field accountIDs, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* accountIDs;

  /// @brief Field password, offset: 0x30, size: 0x8, def value: None
  ::StringW password;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AssignCosmeticUtility___GiveCosmeticToAccountIDs_d__6, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AssignCosmeticUtility___GiveCosmeticToAccountIDs_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AssignCosmeticUtility___GiveCosmeticToAccountIDs_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AssignCosmeticUtility___GiveCosmeticToAccountIDs_d__6, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AssignCosmeticUtility___GiveCosmeticToAccountIDs_d__6, accountIDs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AssignCosmeticUtility___GiveCosmeticToAccountIDs_d__6, password) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AssignCosmeticUtility___GiveCosmeticToAccountIDs_d__6, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AssignCosmeticUtility
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AssignCosmeticUtility*
class CORDL_TYPE AssignCosmeticUtility : public ::GlobalNamespace::DatabaseUtility {
public:
  // Declarations
  using _GiveCosmeticToAccountIDs_d__6 = ::GlobalNamespace::__AssignCosmeticUtility___GiveCosmeticToAccountIDs_d__6;

  using _HandleUtility_d__5 = ::GlobalNamespace::__AssignCosmeticUtility___HandleUtility_d__5;

  /// @brief Field cosmeticKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_cosmeticKey, put = __cordl_internal_set_cosmeticKey))::StringW cosmeticKey;

  /// @brief Field oculusNames, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_oculusNames, put = __cordl_internal_set_oculusNames))::StringW oculusNames;

  /// @brief Field processedOculusNameFilePath, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_processedOculusNameFilePath, put = __cordl_internal_set_processedOculusNameFilePath))::StringW processedOculusNameFilePath;

  /// @brief Field reviewInputFile, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_reviewInputFile, put = __cordl_internal_set_reviewInputFile))::UnityW<::UnityEngine::TextAsset> reviewInputFile;

  /// @brief Method GiveCosmeticToAccountIDs, addr 0x276c00c, size 0x104, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::StringW>*>* GiveCosmeticToAccountIDs(::System::Collections::Generic::List_1<::StringW>* accountIDs,
                                                                                                                          ::StringW password);

  /// @brief Method HandleUtility, addr 0x276bf24, size 0xe8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* HandleUtility(::StringW password);

  static inline ::GlobalNamespace::AssignCosmeticUtility* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_cosmeticKey() const;

  constexpr ::StringW& __cordl_internal_get_cosmeticKey();

  constexpr ::StringW const& __cordl_internal_get_oculusNames() const;

  constexpr ::StringW& __cordl_internal_get_oculusNames();

  constexpr ::StringW const& __cordl_internal_get_processedOculusNameFilePath() const;

  constexpr ::StringW& __cordl_internal_get_processedOculusNameFilePath();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_reviewInputFile() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_reviewInputFile();

  constexpr void __cordl_internal_set_cosmeticKey(::StringW value);

  constexpr void __cordl_internal_set_oculusNames(::StringW value);

  constexpr void __cordl_internal_set_processedOculusNameFilePath(::StringW value);

  constexpr void __cordl_internal_set_reviewInputFile(::UnityW<::UnityEngine::TextAsset> value);

  /// @brief Method .ctor, addr 0x276c110, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssignCosmeticUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssignCosmeticUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssignCosmeticUtility(AssignCosmeticUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssignCosmeticUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssignCosmeticUtility(AssignCosmeticUtility const&) = delete;

  /// @brief Field cosmeticKey, offset: 0x20, size: 0x8, def value: None
  ::StringW ___cosmeticKey;

  /// @brief Field oculusNames, offset: 0x28, size: 0x8, def value: None
  ::StringW ___oculusNames;

  /// @brief Field reviewInputFile, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ___reviewInputFile;

  /// @brief Field processedOculusNameFilePath, offset: 0x38, size: 0x8, def value: None
  ::StringW ___processedOculusNameFilePath;

  /// @brief Field QUERY_LIMIT offset 0xffffffff size 0x4
  static constexpr int32_t QUERY_LIMIT{ static_cast<int32_t>(0x3) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AssignCosmeticUtility, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AssignCosmeticUtility, ___cosmeticKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AssignCosmeticUtility, ___oculusNames) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AssignCosmeticUtility, ___reviewInputFile) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AssignCosmeticUtility, ___processedOculusNameFilePath) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AssignCosmeticUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AssignCosmeticUtility*, "", "AssignCosmeticUtility");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AssignCosmeticUtility___GiveCosmeticToAccountIDs_d__6, "", "AssignCosmeticUtility/<GiveCosmeticToAccountIDs>d__6");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AssignCosmeticUtility___HandleUtility_d__5, "", "AssignCosmeticUtility/<HandleUtility>d__5");
