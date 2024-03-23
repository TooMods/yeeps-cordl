#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Protocol)
namespace ExitGames::Client::Photon {
class CustomType;
}
namespace ExitGames::Client::Photon {
class DeserializeMethod;
}
namespace ExitGames::Client::Photon {
class DeserializeStreamMethod;
}
namespace ExitGames::Client::Photon {
class IProtocol;
}
namespace ExitGames::Client::Photon {
class SerializeMethod;
}
namespace ExitGames::Client::Photon {
class SerializeStreamMethod;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class Protocol;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::Protocol);
// Type: ExitGames.Client.Photon::Protocol
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::Protocol*
class CORDL_TYPE Protocol : public ::System::Object {
public:
  // Declarations
  /// @brief Field CodeDict, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CodeDict, put = setStaticF_CodeDict))::System::Collections::Generic::Dictionary_2<uint8_t, ::ExitGames::Client::Photon::CustomType*>* CodeDict;

  /// @brief Field ProtocolDefault, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ProtocolDefault, put = setStaticF_ProtocolDefault))::ExitGames::Client::Photon::IProtocol* ProtocolDefault;

  /// @brief Field TypeDict, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TypeDict, put = setStaticF_TypeDict))::System::Collections::Generic::Dictionary_2<::System::Type*, ::ExitGames::Client::Photon::CustomType*>* TypeDict;

  /// @brief Field memDeserialize, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_memDeserialize, put = setStaticF_memDeserialize))::ArrayW<uint8_t, ::Array<uint8_t>*> memDeserialize;

  /// @brief Field memFloatBlock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_memFloatBlock, put = setStaticF_memFloatBlock))::ArrayW<float_t, ::Array<float_t>*> memFloatBlock;

  /// @brief Method Deserialize, addr 0x28622b0, size 0x1a0, virtual false, abstract: false, final false
  static inline ::System::Object* Deserialize(::ArrayW<uint8_t, ::Array<uint8_t>*> serializedData);

  /// @brief Method Deserialize, addr 0x286288c, size 0x288, virtual false, abstract: false, final false
  static inline void Deserialize(ByRef<float_t> value, ::ArrayW<uint8_t, ::Array<uint8_t>*> source, ByRef<int32_t> offset);

  /// @brief Method Deserialize, addr 0x2862834, size 0x58, virtual false, abstract: false, final false
  static inline void Deserialize(ByRef<int16_t> value, ::ArrayW<uint8_t, ::Array<uint8_t>*> source, ByRef<int32_t> offset);

  /// @brief Method Deserialize, addr 0x28627a0, size 0x94, virtual false, abstract: false, final false
  static inline void Deserialize(ByRef<int32_t> value, ::ArrayW<uint8_t, ::Array<uint8_t>*> source, ByRef<int32_t> offset);

  static inline ::ExitGames::Client::Photon::Protocol* New_ctor();

  /// @brief Method Serialize, addr 0x2861fcc, size 0x1a0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Serialize(::System::Object* obj);

  /// @brief Method Serialize, addr 0x2862550, size 0x250, virtual false, abstract: false, final false
  static inline void Serialize(float_t value, ::ArrayW<uint8_t, ::Array<uint8_t>*> target, ByRef<int32_t> targetOffset);

  /// @brief Method Serialize, addr 0x2862450, size 0x5c, virtual false, abstract: false, final false
  static inline void Serialize(int16_t value, ::ArrayW<uint8_t, ::Array<uint8_t>*> target, ByRef<int32_t> targetOffset);

  /// @brief Method Serialize, addr 0x28624ac, size 0xa4, virtual false, abstract: false, final false
  static inline void Serialize(int32_t value, ::ArrayW<uint8_t, ::Array<uint8_t>*> target, ByRef<int32_t> targetOffset);

  /// @brief Method TryRegisterType, addr 0x2860f18, size 0x1a4, virtual false, abstract: false, final false
  static inline bool TryRegisterType(::System::Type* type, uint8_t typeCode, ::ExitGames::Client::Photon::SerializeMethod* serializeFunction,
                                     ::ExitGames::Client::Photon::DeserializeMethod* deserializeFunction);

  /// @brief Method TryRegisterType, addr 0x2861138, size 0x1a4, virtual false, abstract: false, final false
  static inline bool TryRegisterType(::System::Type* type, uint8_t typeCode, ::ExitGames::Client::Photon::SerializeStreamMethod* serializeFunction,
                                     ::ExitGames::Client::Photon::DeserializeStreamMethod* deserializeFunction);

  /// @brief Method .ctor, addr 0x2862b14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<uint8_t, ::ExitGames::Client::Photon::CustomType*>* getStaticF_CodeDict();

  static inline ::ExitGames::Client::Photon::IProtocol* getStaticF_ProtocolDefault();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::ExitGames::Client::Photon::CustomType*>* getStaticF_TypeDict();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_memDeserialize();

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_memFloatBlock();

  static inline void setStaticF_CodeDict(::System::Collections::Generic::Dictionary_2<uint8_t, ::ExitGames::Client::Photon::CustomType*>* value);

  static inline void setStaticF_ProtocolDefault(::ExitGames::Client::Photon::IProtocol* value);

  static inline void setStaticF_TypeDict(::System::Collections::Generic::Dictionary_2<::System::Type*, ::ExitGames::Client::Photon::CustomType*>* value);

  static inline void setStaticF_memDeserialize(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_memFloatBlock(::ArrayW<float_t, ::Array<float_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Protocol();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Protocol", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Protocol(Protocol&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Protocol", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Protocol(Protocol const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::Protocol, 0x10>, "Size mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::Protocol);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::Protocol*, "ExitGames.Client.Photon", "Protocol");
