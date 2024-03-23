#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AWSDatabase_def.hpp"
#include "GlobalNamespace/zzzz__DatabaseUtility_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LambdaDatabaseUtility)
namespace GlobalNamespace {
struct __AWSDatabase__LambdaResponse;
}
namespace GlobalNamespace {
struct __LambdaDatabaseUtility___HandleUtility_d__0;
}
namespace OVRSimpleJSON {
class JSONNode;
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
// Forward declare root types
namespace GlobalNamespace {
class LambdaDatabaseUtility;
}
namespace GlobalNamespace {
struct __LambdaDatabaseUtility___HandleUtility_d__0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LambdaDatabaseUtility);
MARK_VAL_T(::GlobalNamespace::__LambdaDatabaseUtility___HandleUtility_d__0);
// Type: ::<HandleUtility>d__0
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LambdaDatabaseUtility::<HandleUtility>d__0
struct CORDL_TYPE __LambdaDatabaseUtility___HandleUtility_d__0 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x276d370, size 0x380, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x276d6f0, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LambdaDatabaseUtility___HandleUtility_d__0();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LambdaDatabaseUtility>",
  // modifiers: "", def_value: None }, CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __LambdaDatabaseUtility___HandleUtility_d__0(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                         ::UnityW<::GlobalNamespace::LambdaDatabaseUtility> __4__this, ::StringW password,
                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LambdaDatabaseUtility> __4__this;

  /// @brief Field password, offset: 0x28, size: 0x8, def value: None
  ::StringW password;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LambdaDatabaseUtility___HandleUtility_d__0, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LambdaDatabaseUtility___HandleUtility_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LambdaDatabaseUtility___HandleUtility_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LambdaDatabaseUtility___HandleUtility_d__0, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LambdaDatabaseUtility___HandleUtility_d__0, password) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LambdaDatabaseUtility___HandleUtility_d__0, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LambdaDatabaseUtility
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LambdaDatabaseUtility*
class CORDL_TYPE LambdaDatabaseUtility : public ::GlobalNamespace::DatabaseUtility {
public:
  // Declarations
  using _HandleUtility_d__0 = ::GlobalNamespace::__LambdaDatabaseUtility___HandleUtility_d__0;

  /// @brief Method GetFunctionEndpoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetFunctionEndpoint();

  /// @brief Method GetInputJSON, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::OVRSimpleJSON::JSONNode* GetInputJSON(::StringW password);

  /// @brief Method HandleUtility, addr 0x276d24c, size 0x104, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* HandleUtility(::StringW password);

  static inline ::GlobalNamespace::LambdaDatabaseUtility* New_ctor();

  /// @brief Method ParseJSONBody, addr 0x276d350, size 0x20, virtual true, abstract: false, final false
  inline ::StringW ParseJSONBody(::OVRSimpleJSON::JSONNode* body);

  /// @brief Method .ctor, addr 0x276bf1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LambdaDatabaseUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LambdaDatabaseUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LambdaDatabaseUtility(LambdaDatabaseUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LambdaDatabaseUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LambdaDatabaseUtility(LambdaDatabaseUtility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LambdaDatabaseUtility, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LambdaDatabaseUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LambdaDatabaseUtility*, "", "LambdaDatabaseUtility");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LambdaDatabaseUtility___HandleUtility_d__0, "", "LambdaDatabaseUtility/<HandleUtility>d__0");
