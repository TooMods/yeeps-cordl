#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EndpointOperationDelegate)
namespace Amazon::Runtime::Internal {
class DiscoveryEndpointBase;
}
namespace Amazon::Runtime::Internal {
class EndpointOperationContextBase;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
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
namespace Amazon::Runtime::Internal {
class EndpointOperationDelegate;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::EndpointOperationDelegate);
// Type: Amazon.Runtime.Internal::EndpointOperationDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::EndpointOperationDelegate*
class CORDL_TYPE EndpointOperationDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x23d9008, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::Amazon::Runtime::Internal::EndpointOperationContextBase* context, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x23d9028, size 0xc, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>* EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x23d8ff4, size 0x14, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>* Invoke(::Amazon::Runtime::Internal::EndpointOperationContextBase* context);

  static inline ::Amazon::Runtime::Internal::EndpointOperationDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x23d8ec8, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EndpointOperationDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EndpointOperationDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EndpointOperationDelegate(EndpointOperationDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EndpointOperationDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EndpointOperationDelegate(EndpointOperationDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::EndpointOperationDelegate, 0x80>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::EndpointOperationDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::EndpointOperationDelegate*, "Amazon.Runtime.Internal", "EndpointOperationDelegate");
