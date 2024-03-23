#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeserializeMethod)
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
namespace ExitGames::Client::Photon {
class DeserializeMethod;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::DeserializeMethod);
// Type: ExitGames.Client.Photon::DeserializeMethod
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::DeserializeMethod*
class CORDL_TYPE DeserializeMethod : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2861d34, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ArrayW<uint8_t, ::Array<uint8_t>*> serializedCustomObject, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2861d54, size 0xc, virtual true, abstract: false, final false
  inline ::System::Object* EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2861d20, size 0x14, virtual true, abstract: false, final false
  inline ::System::Object* Invoke(::ArrayW<uint8_t, ::Array<uint8_t>*> serializedCustomObject);

  static inline ::ExitGames::Client::Photon::DeserializeMethod* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2861c4c, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeserializeMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeserializeMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeserializeMethod(DeserializeMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeserializeMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeserializeMethod(DeserializeMethod const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::DeserializeMethod, 0x80>, "Size mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::DeserializeMethod);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::DeserializeMethod*, "ExitGames.Client.Photon", "DeserializeMethod");
