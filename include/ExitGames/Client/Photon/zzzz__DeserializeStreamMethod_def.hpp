#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeserializeStreamMethod)
namespace ExitGames::Client::Photon {
class StreamBuffer;
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
namespace ExitGames::Client::Photon {
class DeserializeStreamMethod;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::DeserializeStreamMethod);
// Type: ExitGames.Client.Photon::DeserializeStreamMethod
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::DeserializeStreamMethod*
class CORDL_TYPE DeserializeStreamMethod : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2861ea4, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ExitGames::Client::Photon::StreamBuffer* inStream, int16_t length, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2861f38, size 0xc, virtual true, abstract: false, final false
  inline ::System::Object* EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2861e90, size 0x14, virtual true, abstract: false, final false
  inline ::System::Object* Invoke(::ExitGames::Client::Photon::StreamBuffer* inStream, int16_t length);

  static inline ::ExitGames::Client::Photon::DeserializeStreamMethod* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2861d60, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeserializeStreamMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeserializeStreamMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeserializeStreamMethod(DeserializeStreamMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeserializeStreamMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeserializeStreamMethod(DeserializeStreamMethod const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::DeserializeStreamMethod, 0x80>, "Size mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::DeserializeStreamMethod);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::DeserializeStreamMethod*, "ExitGames.Client.Photon", "DeserializeStreamMethod");
