#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResponseEventHandler)
namespace Amazon::Runtime {
class ResponseEventArgs;
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
class ResponseEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::ResponseEventHandler);
// Type: Amazon.Runtime::ResponseEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::ResponseEventHandler*
class CORDL_TYPE ResponseEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2020b50, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::Amazon::Runtime::ResponseEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2020b78, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2020b3c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::Amazon::Runtime::ResponseEventArgs* e);

  static inline ::Amazon::Runtime::ResponseEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2020a0c, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResponseEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResponseEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResponseEventHandler(ResponseEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResponseEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResponseEventHandler(ResponseEventHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::ResponseEventHandler, 0x80>, "Size mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::ResponseEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::ResponseEventHandler*, "Amazon.Runtime", "ResponseEventHandler");
