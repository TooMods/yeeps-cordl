#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsyncNoResult)
namespace System::Threading {
class EventWaitHandle;
}
namespace System::Threading {
class WaitHandle;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Exception;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class AsyncNoResult;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::AsyncNoResult);
// Type: Unity.Services.Vivox::AsyncNoResult
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 50, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::AsyncNoResult*
class CORDL_TYPE AsyncNoResult : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AsyncState, put = set_AsyncState))::System::Object* AsyncState;

  __declspec(property(get = get_AsyncWaitHandle))::System::Threading::WaitHandle* AsyncWaitHandle;

  __declspec(property(get = get_Callback, put = set_Callback))::System::AsyncCallback* Callback;

  __declspec(property(get = get_CompletedSynchronously, put = set_CompletedSynchronously)) bool CompletedSynchronously;

  __declspec(property(get = get_IsCompleted, put = set_IsCompleted)) bool IsCompleted;

  /// @brief Field <AsyncState>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__AsyncState_k__BackingField, put = __cordl_internal_set__AsyncState_k__BackingField))::System::Object* _AsyncState_k__BackingField;

  /// @brief Field <Callback>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Callback_k__BackingField, put = __cordl_internal_set__Callback_k__BackingField))::System::AsyncCallback* _Callback_k__BackingField;

  /// @brief Field <CompletedSynchronously>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__CompletedSynchronously_k__BackingField,
                      put = __cordl_internal_set__CompletedSynchronously_k__BackingField)) bool _CompletedSynchronously_k__BackingField;

  /// @brief Field <IsCompleted>k__BackingField, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get__IsCompleted_k__BackingField, put = __cordl_internal_set__IsCompleted_k__BackingField)) bool _IsCompleted_k__BackingField;

  /// @brief Field _exception, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__exception, put = __cordl_internal_set__exception))::System::Exception* _exception;

  /// @brief Field _waitHandle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__waitHandle, put = __cordl_internal_set__waitHandle))::System::Threading::EventWaitHandle* _waitHandle;

  /// @brief Convert operator to "::System::IAsyncResult"
  constexpr operator ::System::IAsyncResult*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CheckForError, addr 0x1c2c774, size 0x2c, virtual false, abstract: false, final false
  inline void CheckForError();

  /// @brief Method Dispose, addr 0x1c2c9fc, size 0x1c, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::Unity::Services::Vivox::AsyncNoResult* New_ctor(::System::AsyncCallback* callback);

  /// @brief Method SetComplete, addr 0x1c2c7c8, size 0xf0, virtual false, abstract: false, final false
  inline void SetComplete();

  /// @brief Method SetComplete, addr 0x1c2c9a8, size 0x54, virtual false, abstract: false, final false
  inline void SetComplete(::System::Exception* exception);

  /// @brief Method SetCompletedSynchronously, addr 0x1c2c8b8, size 0xf0, virtual false, abstract: false, final false
  inline void SetCompletedSynchronously();

  constexpr ::System::Object*& __cordl_internal_get__AsyncState_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__AsyncState_k__BackingField() const;

  constexpr ::System::AsyncCallback*& __cordl_internal_get__Callback_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> const& __cordl_internal_get__Callback_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__CompletedSynchronously_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CompletedSynchronously_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsCompleted_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsCompleted_k__BackingField();

  constexpr ::System::Exception*& __cordl_internal_get__exception();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __cordl_internal_get__exception() const;

  constexpr ::System::Threading::EventWaitHandle*& __cordl_internal_get__waitHandle();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::EventWaitHandle*> const& __cordl_internal_get__waitHandle() const;

  constexpr void __cordl_internal_set__AsyncState_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set__Callback_k__BackingField(::System::AsyncCallback* value);

  constexpr void __cordl_internal_set__CompletedSynchronously_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsCompleted_k__BackingField(bool value);

  constexpr void __cordl_internal_set__exception(::System::Exception* value);

  constexpr void __cordl_internal_set__waitHandle(::System::Threading::EventWaitHandle* value);

  /// @brief Method .ctor, addr 0x1c2c6b4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::AsyncCallback* callback);

  /// @brief Method get_AsyncState, addr 0x1c2c6f0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_AsyncState();

  /// @brief Method get_AsyncWaitHandle, addr 0x1c2c700, size 0x74, virtual true, abstract: false, final true
  inline ::System::Threading::WaitHandle* get_AsyncWaitHandle();

  /// @brief Method get_Callback, addr 0x1c2c6e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::AsyncCallback* get_Callback();

  /// @brief Method get_CompletedSynchronously, addr 0x1c2c7a0, size 0x8, virtual true, abstract: false, final true
  inline bool get_CompletedSynchronously();

  /// @brief Method get_IsCompleted, addr 0x1c2c7b4, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsCompleted();

  /// @brief Convert to "::System::IAsyncResult"
  constexpr ::System::IAsyncResult* i___System__IAsyncResult() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_AsyncState, addr 0x1c2c6f8, size 0x8, virtual false, abstract: false, final false
  inline void set_AsyncState(::System::Object* value);

  /// @brief Method set_Callback, addr 0x1c2c6e8, size 0x8, virtual false, abstract: false, final false
  inline void set_Callback(::System::AsyncCallback* value);

  /// @brief Method set_CompletedSynchronously, addr 0x1c2c7a8, size 0xc, virtual false, abstract: false, final false
  inline void set_CompletedSynchronously(bool value);

  /// @brief Method set_IsCompleted, addr 0x1c2c7bc, size 0xc, virtual false, abstract: false, final false
  inline void set_IsCompleted(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncNoResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncNoResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncNoResult(AsyncNoResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncNoResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncNoResult(AsyncNoResult const&) = delete;

  /// @brief Field _waitHandle, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::EventWaitHandle* ____waitHandle;

  /// @brief Field _exception, offset: 0x18, size: 0x8, def value: None
  ::System::Exception* ____exception;

  /// @brief Field <Callback>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::AsyncCallback* ____Callback_k__BackingField;

  /// @brief Field <AsyncState>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____AsyncState_k__BackingField;

  /// @brief Field <CompletedSynchronously>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____CompletedSynchronously_k__BackingField;

  /// @brief Field <IsCompleted>k__BackingField, offset: 0x31, size: 0x1, def value: None
  bool ____IsCompleted_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::AsyncNoResult, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AsyncNoResult, ____waitHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AsyncNoResult, ____exception) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AsyncNoResult, ____Callback_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AsyncNoResult, ____AsyncState_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AsyncNoResult, ____CompletedSynchronously_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AsyncNoResult, ____IsCompleted_k__BackingField) == 0x31, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::AsyncNoResult);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::AsyncNoResult*, "Unity.Services.Vivox", "AsyncNoResult");
