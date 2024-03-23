#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsyncOperation)
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class AsyncOperation;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::AsyncOperation);
// Type: System.ComponentModel::AsyncOperation
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::AsyncOperation*
class CORDL_TYPE AsyncOperation : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_SynchronizationContext))::System::Threading::SynchronizationContext* SynchronizationContext;

  __declspec(property(get = get_UserSuppliedState))::System::Object* UserSuppliedState;

  /// @brief Field _alreadyCompleted, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__alreadyCompleted, put = __cordl_internal_set__alreadyCompleted)) bool _alreadyCompleted;

  /// @brief Field _syncContext, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__syncContext, put = __cordl_internal_set__syncContext))::System::Threading::SynchronizationContext* _syncContext;

  /// @brief Field _userSuppliedState, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__userSuppliedState, put = __cordl_internal_set__userSuppliedState))::System::Object* _userSuppliedState;

  /// @brief Method CreateOperation, addr 0x1ae5e18, size 0x70, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::AsyncOperation* CreateOperation(::System::Object* userSuppliedState, ::System::Threading::SynchronizationContext* syncContext);

  /// @brief Method Finalize, addr 0x1ae5afc, size 0xac, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::System::ComponentModel::AsyncOperation* New_ctor();

  static inline ::System::ComponentModel::AsyncOperation* New_ctor(::System::Object* userSuppliedState, ::System::Threading::SynchronizationContext* syncContext);

  /// @brief Method OperationCompleted, addr 0x1ae5d28, size 0x20, virtual false, abstract: false, final false
  inline void OperationCompleted();

  /// @brief Method OperationCompletedCore, addr 0x1ae5c3c, size 0xec, virtual false, abstract: false, final false
  inline void OperationCompletedCore();

  /// @brief Method Post, addr 0x1ae5bb8, size 0x8, virtual false, abstract: false, final false
  inline void Post(::System::Threading::SendOrPostCallback* d, ::System::Object* arg);

  /// @brief Method PostCore, addr 0x1ae5bc0, size 0x60, virtual false, abstract: false, final false
  inline void PostCore(::System::Threading::SendOrPostCallback* d, ::System::Object* arg, bool markCompleted);

  /// @brief Method PostOperationCompleted, addr 0x1ae5c20, size 0x1c, virtual false, abstract: false, final false
  inline void PostOperationCompleted(::System::Threading::SendOrPostCallback* d, ::System::Object* arg);

  /// @brief Method VerifyDelegateNotNull, addr 0x1ae5da8, size 0x70, virtual false, abstract: false, final false
  inline void VerifyDelegateNotNull(::System::Threading::SendOrPostCallback* d);

  /// @brief Method VerifyNotCompleted, addr 0x1ae5d48, size 0x60, virtual false, abstract: false, final false
  inline void VerifyNotCompleted();

  constexpr bool const& __cordl_internal_get__alreadyCompleted() const;

  constexpr bool& __cordl_internal_get__alreadyCompleted();

  constexpr ::System::Threading::SynchronizationContext*& __cordl_internal_get__syncContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SynchronizationContext*> const& __cordl_internal_get__syncContext() const;

  constexpr ::System::Object*& __cordl_internal_get__userSuppliedState();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__userSuppliedState() const;

  constexpr void __cordl_internal_set__alreadyCompleted(bool value);

  constexpr void __cordl_internal_set__syncContext(::System::Threading::SynchronizationContext* value);

  constexpr void __cordl_internal_set__userSuppliedState(::System::Object* value);

  /// @brief Method .ctor, addr 0x1ae5e88, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1ae5ab8, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* userSuppliedState, ::System::Threading::SynchronizationContext* syncContext);

  /// @brief Method get_SynchronizationContext, addr 0x1ae5bb0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::SynchronizationContext* get_SynchronizationContext();

  /// @brief Method get_UserSuppliedState, addr 0x1ae5ba8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_UserSuppliedState();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncOperation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncOperation(AsyncOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncOperation(AsyncOperation const&) = delete;

  /// @brief Field _syncContext, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::SynchronizationContext* ____syncContext;

  /// @brief Field _userSuppliedState, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____userSuppliedState;

  /// @brief Field _alreadyCompleted, offset: 0x20, size: 0x1, def value: None
  bool ____alreadyCompleted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::AsyncOperation, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::AsyncOperation, ____syncContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::AsyncOperation, ____userSuppliedState) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::AsyncOperation, ____alreadyCompleted) == 0x20, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::AsyncOperation);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::AsyncOperation*, "System.ComponentModel", "AsyncOperation");
