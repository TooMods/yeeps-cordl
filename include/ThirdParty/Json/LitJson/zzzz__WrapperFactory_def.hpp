#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WrapperFactory)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace ThirdParty::Json::LitJson {
class IJsonWrapper;
}
// Forward declare root types
namespace ThirdParty::Json::LitJson {
class WrapperFactory;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::Json::LitJson::WrapperFactory);
// Type: ThirdParty.Json.LitJson::WrapperFactory
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// Is value type: false
// CS Name: ::ThirdParty.Json.LitJson::WrapperFactory*
class CORDL_TYPE WrapperFactory : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x14a57bc, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x14a57dc, size 0xc, virtual true, abstract: false, final false
  inline ::ThirdParty::Json::LitJson::IJsonWrapper* EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x14a57a8, size 0x14, virtual true, abstract: false, final false
  inline ::ThirdParty::Json::LitJson::IJsonWrapper* Invoke();

  static inline ::ThirdParty::Json::LitJson::WrapperFactory* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x14a56ec, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WrapperFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WrapperFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WrapperFactory(WrapperFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WrapperFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WrapperFactory(WrapperFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::Json::LitJson::WrapperFactory, 0x80>, "Size mismatch!");

} // namespace ThirdParty::Json::LitJson
NEED_NO_BOX(::ThirdParty::Json::LitJson::WrapperFactory);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Json::LitJson::WrapperFactory*, "ThirdParty.Json.LitJson", "WrapperFactory");
