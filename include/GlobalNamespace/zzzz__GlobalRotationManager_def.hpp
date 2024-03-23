#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AWSDatabase_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalRotationManager)
namespace GlobalNamespace {
struct GlobalRotation;
}
namespace GlobalNamespace {
struct __AWSDatabase__LambdaResponse;
}
namespace GlobalNamespace {
class __GlobalRotationManager__OnFetchGlobalRotationFailure;
}
namespace GlobalNamespace {
class __GlobalRotationManager__OnFetchGlobalRotationSuccess;
}
namespace GlobalNamespace {
struct __GlobalRotationManager___FetchGlobalRotation_d__4;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
class GlobalRotationManager;
}
namespace GlobalNamespace {
class __GlobalRotationManager__OnFetchGlobalRotationFailure;
}
namespace GlobalNamespace {
class __GlobalRotationManager__OnFetchGlobalRotationSuccess;
}
namespace GlobalNamespace {
struct __GlobalRotationManager___FetchGlobalRotation_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GlobalRotationManager);
MARK_REF_PTR_T(::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationFailure);
MARK_REF_PTR_T(::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationSuccess);
MARK_VAL_T(::GlobalNamespace::__GlobalRotationManager___FetchGlobalRotation_d__4);
// Type: ::OnFetchGlobalRotationSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GlobalRotationManager::OnFetchGlobalRotationSuccess*
class CORDL_TYPE __GlobalRotationManager__OnFetchGlobalRotationSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x15984c8, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::GlobalRotation globalRotation, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1598554, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x159848c, size 0x3c, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::GlobalRotation globalRotation);

  static inline ::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x15983c8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GlobalRotationManager__OnFetchGlobalRotationSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GlobalRotationManager__OnFetchGlobalRotationSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GlobalRotationManager__OnFetchGlobalRotationSuccess(__GlobalRotationManager__OnFetchGlobalRotationSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GlobalRotationManager__OnFetchGlobalRotationSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GlobalRotationManager__OnFetchGlobalRotationSuccess(__GlobalRotationManager__OnFetchGlobalRotationSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnFetchGlobalRotationFailure
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GlobalRotationManager::OnFetchGlobalRotationFailure*
class CORDL_TYPE __GlobalRotationManager__OnFetchGlobalRotationFailure : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1598648, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errorType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1598668, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1598634, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errorType);

  static inline ::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationFailure* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1598560, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GlobalRotationManager__OnFetchGlobalRotationFailure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GlobalRotationManager__OnFetchGlobalRotationFailure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GlobalRotationManager__OnFetchGlobalRotationFailure(__GlobalRotationManager__OnFetchGlobalRotationFailure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GlobalRotationManager__OnFetchGlobalRotationFailure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GlobalRotationManager__OnFetchGlobalRotationFailure(__GlobalRotationManager__OnFetchGlobalRotationFailure const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationFailure, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<FetchGlobalRotation>d__4
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::GlobalRotationManager::<FetchGlobalRotation>d__4
struct CORDL_TYPE __GlobalRotationManager___FetchGlobalRotation_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1598674, size 0xb60, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x15991d4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GlobalRotationManager___FetchGlobalRotation_d__4();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "rotationKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "onFailure", ty: "::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationFailure*", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty:
  // "::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationSuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __GlobalRotationManager___FetchGlobalRotation_d__4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW rotationKey,
                                                               ::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationFailure* onFailure,
                                                               ::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationSuccess* onSuccess,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field rotationKey, offset: 0x28, size: 0x8, def value: None
  ::StringW rotationKey;

  /// @brief Field onFailure, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationFailure* onFailure;

  /// @brief Field onSuccess, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GlobalRotationManager___FetchGlobalRotation_d__4, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GlobalRotationManager___FetchGlobalRotation_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GlobalRotationManager___FetchGlobalRotation_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GlobalRotationManager___FetchGlobalRotation_d__4, rotationKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GlobalRotationManager___FetchGlobalRotation_d__4, onFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GlobalRotationManager___FetchGlobalRotation_d__4, onSuccess) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GlobalRotationManager___FetchGlobalRotation_d__4, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GlobalRotationManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GlobalRotationManager*
class CORDL_TYPE GlobalRotationManager : public ::System::Object {
public:
  // Declarations
  using OnFetchGlobalRotationFailure = ::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationFailure;

  using OnFetchGlobalRotationSuccess = ::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationSuccess;

  using _FetchGlobalRotation_d__4 = ::GlobalNamespace::__GlobalRotationManager___FetchGlobalRotation_d__4;

  /// @brief Field cachedRotations, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cachedRotations,
                             put = setStaticF_cachedRotations))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::GlobalRotation>* cachedRotations;

  /// @brief Method FetchGlobalRotation, addr 0x1598290, size 0xa8, virtual false, abstract: false, final false
  static inline void FetchGlobalRotation(::StringW rotationKey, ::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationSuccess* onSuccess,
                                         ::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationFailure* onFailure);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::GlobalRotation>* getStaticF_cachedRotations();

  static inline void setStaticF_cachedRotations(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::GlobalRotation>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GlobalRotationManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GlobalRotationManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GlobalRotationManager(GlobalRotationManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GlobalRotationManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GlobalRotationManager(GlobalRotationManager const&) = delete;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Global Rotations: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GlobalRotationManager, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GlobalRotationManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalRotationManager*, "", "GlobalRotationManager");
NEED_NO_BOX(::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationFailure);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationFailure*, "", "GlobalRotationManager/OnFetchGlobalRotationFailure");
NEED_NO_BOX(::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationSuccess*, "", "GlobalRotationManager/OnFetchGlobalRotationSuccess");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GlobalRotationManager___FetchGlobalRotation_d__4, "", "GlobalRotationManager/<FetchGlobalRotation>d__4");
