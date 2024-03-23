#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(AsyncCompletedEventArgs)
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class AsyncCompletedEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::AsyncCompletedEventArgs);
// Type: System.ComponentModel::AsyncCompletedEventArgs
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::AsyncCompletedEventArgs*
class CORDL_TYPE AsyncCompletedEventArgs : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_Cancelled)) bool Cancelled;

  __declspec(property(get = get_Error))::System::Exception* Error;

  __declspec(property(get = get_UserState))::System::Object* UserState;

  /// @brief Field cancelled, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_cancelled, put = __cordl_internal_set_cancelled)) bool cancelled;

  /// @brief Field error, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_error, put = __cordl_internal_set_error))::System::Exception* error;

  /// @brief Field userState, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_userState, put = __cordl_internal_set_userState))::System::Object* userState;

  static inline ::System::ComponentModel::AsyncCompletedEventArgs* New_ctor();

  static inline ::System::ComponentModel::AsyncCompletedEventArgs* New_ctor(::System::Exception* error, bool cancelled, ::System::Object* userState);

  /// @brief Method RaiseExceptionIfNecessary, addr 0x1b0fdc4, size 0xe4, virtual false, abstract: false, final false
  inline void RaiseExceptionIfNecessary();

  constexpr bool const& __cordl_internal_get_cancelled() const;

  constexpr bool& __cordl_internal_get_cancelled();

  constexpr ::System::Exception*& __cordl_internal_get_error();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __cordl_internal_get_error() const;

  constexpr ::System::Object*& __cordl_internal_get_userState();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_userState() const;

  constexpr void __cordl_internal_set_cancelled(bool value);

  constexpr void __cordl_internal_set_error(::System::Exception* value);

  constexpr void __cordl_internal_set_userState(::System::Object* value);

  /// @brief Method .ctor, addr 0x1b0fcd0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1b0fd28, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* error, bool cancelled, ::System::Object* userState);

  /// @brief Method get_Cancelled, addr 0x1b0fdac, size 0x8, virtual false, abstract: false, final false
  inline bool get_Cancelled();

  /// @brief Method get_Error, addr 0x1b0fdb4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Exception* get_Error();

  /// @brief Method get_UserState, addr 0x1b0fdbc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_UserState();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncCompletedEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncCompletedEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncCompletedEventArgs(AsyncCompletedEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncCompletedEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncCompletedEventArgs(AsyncCompletedEventArgs const&) = delete;

  /// @brief Field error, offset: 0x10, size: 0x8, def value: None
  ::System::Exception* ___error;

  /// @brief Field cancelled, offset: 0x18, size: 0x1, def value: None
  bool ___cancelled;

  /// @brief Field userState, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___userState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::AsyncCompletedEventArgs, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::AsyncCompletedEventArgs, ___error) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::AsyncCompletedEventArgs, ___cancelled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::AsyncCompletedEventArgs, ___userState) == 0x20, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::AsyncCompletedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::AsyncCompletedEventArgs*, "System.ComponentModel", "AsyncCompletedEventArgs");
