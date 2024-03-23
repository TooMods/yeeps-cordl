#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerializeStreamMethod)
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
class SerializeStreamMethod;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::SerializeStreamMethod);
// Type: ExitGames.Client.Photon::SerializeStreamMethod
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::SerializeStreamMethod*
class CORDL_TYPE SerializeStreamMethod : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2861bfc, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ExitGames::Client::Photon::StreamBuffer* outStream, ::System::Object* customObject, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2861c24, size 0x28, virtual true, abstract: false, final false
  inline int16_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2861be8, size 0x14, virtual true, abstract: false, final false
  inline int16_t Invoke(::ExitGames::Client::Photon::StreamBuffer* outStream, ::System::Object* customObject);

  static inline ::ExitGames::Client::Photon::SerializeStreamMethod* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2861ab8, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializeStreamMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializeStreamMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializeStreamMethod(SerializeStreamMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializeStreamMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializeStreamMethod(SerializeStreamMethod const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::SerializeStreamMethod, 0x80>, "Size mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::SerializeStreamMethod);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::SerializeStreamMethod*, "ExitGames.Client.Photon", "SerializeStreamMethod");
