#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DoWorkEventHandler)
namespace System::ComponentModel {
class DoWorkEventArgs;
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
namespace System::ComponentModel {
class DoWorkEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DoWorkEventHandler);
// Type: System.ComponentModel::DoWorkEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::DoWorkEventHandler*
class CORDL_TYPE DoWorkEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1b14594, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::ComponentModel::DoWorkEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1b145bc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1b14580, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::ComponentModel::DoWorkEventArgs* e);

  static inline ::System::ComponentModel::DoWorkEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1b14450, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DoWorkEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DoWorkEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DoWorkEventHandler(DoWorkEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DoWorkEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DoWorkEventHandler(DoWorkEventHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DoWorkEventHandler, 0x80>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DoWorkEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DoWorkEventHandler*, "System.ComponentModel", "DoWorkEventHandler");
