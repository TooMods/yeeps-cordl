#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ImporterFunc)
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
namespace ThirdParty::Json::LitJson {
class ImporterFunc;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::Json::LitJson::ImporterFunc);
// Type: ThirdParty.Json.LitJson::ImporterFunc
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// Is value type: false
// CS Name: ::ThirdParty.Json.LitJson::ImporterFunc*
class CORDL_TYPE ImporterFunc : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x14a56c0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Object* input, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x14a56e0, size 0xc, virtual true, abstract: false, final false
  inline ::System::Object* EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x14a56ac, size 0x14, virtual true, abstract: false, final false
  inline ::System::Object* Invoke(::System::Object* input);

  static inline ::ThirdParty::Json::LitJson::ImporterFunc* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x14a5580, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImporterFunc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImporterFunc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImporterFunc(ImporterFunc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImporterFunc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImporterFunc(ImporterFunc const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::Json::LitJson::ImporterFunc, 0x80>, "Size mismatch!");

} // namespace ThirdParty::Json::LitJson
NEED_NO_BOX(::ThirdParty::Json::LitJson::ImporterFunc);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Json::LitJson::ImporterFunc*, "ThirdParty.Json.LitJson", "ImporterFunc");
