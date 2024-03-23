#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__CustomYieldInstruction_def.hpp"
CORDL_MODULE_EXPORT(AsyncOperationBase_1)
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
namespace Unity::Services::Core::Internal {
struct AsyncOperationStatus;
}
namespace Unity::Services::Core::Internal {
template <typename T> class IAsyncOperation_1;
}
namespace Unity::Services::Core::Internal {
template <typename T> class __AsyncOperationBase_1____c__DisplayClass19_0;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
template <typename T> class AsyncOperationBase_1;
}
namespace Unity::Services::Core::Internal {
template <typename T> class __AsyncOperationBase_1____c__DisplayClass19_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Core::Internal::AsyncOperationBase_1);
MARK_GEN_REF_PTR_T(::Unity::Services::Core::Internal::__AsyncOperationBase_1____c__DisplayClass19_0);
// Type: ::<>c__DisplayClass19_0
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::AsyncOperationBase`1::<>c__DisplayClass19_0<T>*
class CORDL_TYPE __AsyncOperationBase_1____c__DisplayClass19_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field continuation, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_continuation, put = __cordl_internal_set_continuation))::System::Action* continuation;

  static inline ::Unity::Services::Core::Internal::__AsyncOperationBase_1____c__DisplayClass19_0<T>* New_ctor();

  /// @brief Method <OnCompleted>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _OnCompleted_b__0(::Unity::Services::Core::Internal::IAsyncOperation_1<T>* op);

  constexpr ::System::Action*& __cordl_internal_get_continuation();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_continuation() const;

  constexpr void __cordl_internal_set_continuation(::System::Action* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncOperationBase_1____c__DisplayClass19_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationBase_1____c__DisplayClass19_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncOperationBase_1____c__DisplayClass19_0(__AsyncOperationBase_1____c__DisplayClass19_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationBase_1____c__DisplayClass19_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncOperationBase_1____c__DisplayClass19_0(__AsyncOperationBase_1____c__DisplayClass19_0 const&) = delete;

  /// @brief Field continuation, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___continuation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Internal
// Type: Unity.Services.Core.Internal::AsyncOperationBase`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::AsyncOperationBase`1<T>*
class CORDL_TYPE AsyncOperationBase_1 : public ::UnityEngine::CustomYieldInstruction {
public:
  // Declarations
  using __c__DisplayClass19_0 = ::Unity::Services::Core::Internal::__AsyncOperationBase_1____c__DisplayClass19_0<T>;

  __declspec(property(get = get_Exception))::System::Exception* Exception;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  __declspec(property(get = get_IsDone)) bool IsDone;

  __declspec(property(get = get_Result)) T Result;

  __declspec(property(get = get_Status))::Unity::Services::Core::Internal::AsyncOperationStatus Status;

  __declspec(property(get = get_keepWaiting)) bool keepWaiting;

  /// @brief Field m_CompletedCallback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CompletedCallback,
                      put = __cordl_internal_set_m_CompletedCallback))::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>* m_CompletedCallback;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::INotifyCompletion*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Core::Internal::IAsyncOperation_1<T>"
  constexpr operator ::Unity::Services::Core::Internal::IAsyncOperation_1<T>*() noexcept;

  /// @brief Method DidComplete, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void DidComplete();

  /// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Core::Internal::AsyncOperationBase_1<T>* GetAwaiter();

  /// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T GetResult();

  static inline ::Unity::Services::Core::Internal::AsyncOperationBase_1<T>* New_ctor();

  /// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnCompleted(::System::Action* continuation);

  constexpr ::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>*& __cordl_internal_get_m_CompletedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>*> const& __cordl_internal_get_m_CompletedCallback() const;

  constexpr void __cordl_internal_set_m_CompletedCallback(::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_Completed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void add_Completed(::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>* value);

  /// @brief Method get_Exception, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Exception* get_Exception();

  /// @brief Method get_IsCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsCompleted();

  /// @brief Method get_IsDone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_IsDone();

  /// @brief Method get_Result, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T get_Result();

  /// @brief Method get_Status, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Core::Internal::AsyncOperationStatus get_Status();

  /// @brief Method get_keepWaiting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_keepWaiting();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() noexcept;

  /// @brief Convert to "::Unity::Services::Core::Internal::IAsyncOperation_1<T>"
  constexpr ::Unity::Services::Core::Internal::IAsyncOperation_1<T>* i___Unity__Services__Core__Internal__IAsyncOperation_1_T_() noexcept;

  /// @brief Method remove_Completed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void remove_Completed(::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncOperationBase_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncOperationBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncOperationBase_1(AsyncOperationBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncOperationBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncOperationBase_1(AsyncOperationBase_1 const&) = delete;

  /// @brief Field m_CompletedCallback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>* ___m_CompletedCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Core::Internal::AsyncOperationBase_1, "Unity.Services.Core.Internal", "AsyncOperationBase`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Core::Internal::__AsyncOperationBase_1____c__DisplayClass19_0, "Unity.Services.Core.Internal", "AsyncOperationBase`1/<>c__DisplayClass19_0");
