#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExceptionEventHandler)
namespace Amazon::Runtime {
class ExceptionEventArgs;
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
namespace Amazon::Runtime {
class ExceptionEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::ExceptionEventHandler);
// Type: Amazon.Runtime::ExceptionEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::ExceptionEventHandler*
class CORDL_TYPE ExceptionEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2019f38, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::Amazon::Runtime::ExceptionEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2019f60, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2019f24, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::Amazon::Runtime::ExceptionEventArgs* e);

  static inline ::Amazon::Runtime::ExceptionEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2019df4, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExceptionEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExceptionEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExceptionEventHandler(ExceptionEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExceptionEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExceptionEventHandler(ExceptionEventHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::ExceptionEventHandler, 0x80>, "Size mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::ExceptionEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::ExceptionEventHandler*, "Amazon.Runtime", "ExceptionEventHandler");
