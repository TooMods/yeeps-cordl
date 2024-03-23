#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerializeMethod)
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
class SerializeMethod;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::SerializeMethod);
// Type: ExitGames.Client.Photon::SerializeMethod
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::SerializeMethod*
class CORDL_TYPE SerializeMethod : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2861a8c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Object* customObject, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2861aac, size 0xc, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2861a78, size 0x14, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Invoke(::System::Object* customObject);

  static inline ::ExitGames::Client::Photon::SerializeMethod* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x286194c, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializeMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializeMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializeMethod(SerializeMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializeMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializeMethod(SerializeMethod const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::SerializeMethod, 0x80>, "Size mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::SerializeMethod);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::SerializeMethod*, "ExitGames.Client.Photon", "SerializeMethod");
