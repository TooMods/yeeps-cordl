#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsyncOperationManager)
namespace System::ComponentModel {
class AsyncOperation;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class AsyncOperationManager;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::AsyncOperationManager);
// Type: System.ComponentModel::AsyncOperationManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::AsyncOperationManager*
class CORDL_TYPE AsyncOperationManager : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateOperation, addr 0x1ae5ec0, size 0x1c, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::AsyncOperation* CreateOperation(::System::Object* userSuppliedState);

  /// @brief Method get_SynchronizationContext, addr 0x1ae5edc, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Threading::SynchronizationContext* get_SynchronizationContext();

  /// @brief Method set_SynchronizationContext, addr 0x1ae5f48, size 0x8, virtual false, abstract: false, final false
  static inline void set_SynchronizationContext(::System::Threading::SynchronizationContext* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncOperationManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncOperationManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncOperationManager(AsyncOperationManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncOperationManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncOperationManager(AsyncOperationManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::AsyncOperationManager, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::AsyncOperationManager);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::AsyncOperationManager*, "System.ComponentModel", "AsyncOperationManager");
