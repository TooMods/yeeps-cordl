#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AsyncOperationAwaiter)
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System {
class Action;
}
namespace Unity::Services::Core::Internal {
class IAsyncOperationAwaiter;
}
namespace Unity::Services::Core::Internal {
class IAsyncOperation;
}
namespace Unity::Services::Core::Internal {
class __AsyncOperationAwaiter____c__DisplayClass2_0;
}
namespace Unity::Services::Core::Internal {
class __AsyncOperationAwaiter____c__DisplayClass3_0;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class __AsyncOperationAwaiter____c__DisplayClass2_0;
}
namespace Unity::Services::Core::Internal {
class __AsyncOperationAwaiter____c__DisplayClass3_0;
}
namespace Unity::Services::Core::Internal {
struct AsyncOperationAwaiter;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0);
MARK_REF_PTR_T(::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0);
MARK_VAL_T(::Unity::Services::Core::Internal::AsyncOperationAwaiter);
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::AsyncOperationAwaiter::<>c__DisplayClass2_0*
class CORDL_TYPE __AsyncOperationAwaiter____c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field continuation, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_continuation, put = __cordl_internal_set_continuation))::System::Action* continuation;

  static inline ::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0* New_ctor();

  /// @brief Method <OnCompleted>b__0, addr 0x2669cd8, size 0x24, virtual false, abstract: false, final false
  inline void _OnCompleted_b__0(::Unity::Services::Core::Internal::IAsyncOperation* operation);

  constexpr ::System::Action*& __cordl_internal_get_continuation();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_continuation() const;

  constexpr void __cordl_internal_set_continuation(::System::Action* value);

  /// @brief Method .ctor, addr 0x266999c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncOperationAwaiter____c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationAwaiter____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncOperationAwaiter____c__DisplayClass2_0(__AsyncOperationAwaiter____c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationAwaiter____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncOperationAwaiter____c__DisplayClass2_0(__AsyncOperationAwaiter____c__DisplayClass2_0 const&) = delete;

  /// @brief Field continuation, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___continuation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0, ___continuation) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Core::Internal
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::AsyncOperationAwaiter::<>c__DisplayClass3_0*
class CORDL_TYPE __AsyncOperationAwaiter____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field continuation, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_continuation, put = __cordl_internal_set_continuation))::System::Action* continuation;

  static inline ::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0* New_ctor();

  /// @brief Method <UnsafeOnCompleted>b__0, addr 0x2669cfc, size 0x24, virtual false, abstract: false, final false
  inline void _UnsafeOnCompleted_b__0(::Unity::Services::Core::Internal::IAsyncOperation* operation);

  constexpr ::System::Action*& __cordl_internal_get_continuation();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_continuation() const;

  constexpr void __cordl_internal_set_continuation(::System::Action* value);

  /// @brief Method .ctor, addr 0x2669ad0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncOperationAwaiter____c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationAwaiter____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncOperationAwaiter____c__DisplayClass3_0(__AsyncOperationAwaiter____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationAwaiter____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncOperationAwaiter____c__DisplayClass3_0(__AsyncOperationAwaiter____c__DisplayClass3_0 const&) = delete;

  /// @brief Field continuation, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___continuation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0, ___continuation) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Core::Internal
// Type: Unity.Services.Core.Internal::AsyncOperationAwaiter
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: true
// CS Name: ::Unity.Services.Core.Internal::AsyncOperationAwaiter
struct CORDL_TYPE AsyncOperationAwaiter {
public:
  // Declarations
  using __c__DisplayClass2_0 = ::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0;

  using __c__DisplayClass3_0 = ::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*();

  /// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::INotifyCompletion*();

  /// @brief Convert operator to "::Unity::Services::Core::Internal::IAsyncOperationAwaiter"
  constexpr operator ::Unity::Services::Core::Internal::IAsyncOperationAwaiter*();

  /// @brief Method GetResult, addr 0x2669b78, size 0x160, virtual true, abstract: false, final true
  inline void GetResult();

  /// @brief Method OnCompleted, addr 0x2669870, size 0x12c, virtual true, abstract: false, final true
  inline void OnCompleted(::System::Action* continuation);

  /// @brief Method UnsafeOnCompleted, addr 0x26699a4, size 0x12c, virtual true, abstract: false, final true
  inline void UnsafeOnCompleted(::System::Action* continuation);

  /// @brief Method .ctor, addr 0x2669868, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Core::Internal::IAsyncOperation* asyncOperation);

  /// @brief Method get_IsCompleted, addr 0x2669ad8, size 0xa0, virtual true, abstract: false, final true
  inline bool get_IsCompleted();

  /// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion();

  /// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion();

  /// @brief Convert to "::Unity::Services::Core::Internal::IAsyncOperationAwaiter"
  constexpr ::Unity::Services::Core::Internal::IAsyncOperationAwaiter* i___Unity__Services__Core__Internal__IAsyncOperationAwaiter();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncOperationAwaiter();

  // Ctor Parameters [CppParam { name: "m_Operation", ty: "::Unity::Services::Core::Internal::IAsyncOperation*", modifiers: "", def_value: None }]
  constexpr AsyncOperationAwaiter(::Unity::Services::Core::Internal::IAsyncOperation* m_Operation) noexcept;

  /// @brief Field m_Operation, offset: 0x0, size: 0x8, def value: None
  ::Unity::Services::Core::Internal::IAsyncOperation* m_Operation;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::AsyncOperationAwaiter, 0x8>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::AsyncOperationAwaiter, m_Operation) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0*, "Unity.Services.Core.Internal", "AsyncOperationAwaiter/<>c__DisplayClass2_0");
NEED_NO_BOX(::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0*, "Unity.Services.Core.Internal", "AsyncOperationAwaiter/<>c__DisplayClass3_0");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::AsyncOperationAwaiter, "Unity.Services.Core.Internal", "AsyncOperationAwaiter");
