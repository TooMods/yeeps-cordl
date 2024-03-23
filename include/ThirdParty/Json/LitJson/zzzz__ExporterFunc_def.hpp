#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExporterFunc)
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
class JsonWriter;
}
// Forward declare root types
namespace ThirdParty::Json::LitJson {
class ExporterFunc;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::Json::LitJson::ExporterFunc);
// Type: ThirdParty.Json.LitJson::ExporterFunc
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// Is value type: false
// CS Name: ::ThirdParty.Json.LitJson::ExporterFunc*
class CORDL_TYPE ExporterFunc : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x14a554c, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Object* obj, ::ThirdParty::Json::LitJson::JsonWriter* writer, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x14a5574, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x14a5538, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* obj, ::ThirdParty::Json::LitJson::JsonWriter* writer);

  static inline ::ThirdParty::Json::LitJson::ExporterFunc* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x14a5408, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExporterFunc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExporterFunc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExporterFunc(ExporterFunc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExporterFunc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExporterFunc(ExporterFunc const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::Json::LitJson::ExporterFunc, 0x80>, "Size mismatch!");

} // namespace ThirdParty::Json::LitJson
NEED_NO_BOX(::ThirdParty::Json::LitJson::ExporterFunc);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Json::LitJson::ExporterFunc*, "ThirdParty.Json.LitJson", "ExporterFunc");
