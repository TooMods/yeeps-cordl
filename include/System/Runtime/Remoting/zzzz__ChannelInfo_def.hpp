#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ChannelInfo)
namespace System::Runtime::Remoting {
class IChannelInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ChannelInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::ChannelInfo);
// Type: System.Runtime.Remoting::ChannelInfo
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: ::System.Runtime.Remoting::ChannelInfo*
class CORDL_TYPE ChannelInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ChannelData))::ArrayW<::System::Object*, ::Array<::System::Object*>*> ChannelData;

  /// @brief Field channelData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_channelData, put = __cordl_internal_set_channelData))::ArrayW<::System::Object*, ::Array<::System::Object*>*> channelData;

  /// @brief Convert operator to "::System::Runtime::Remoting::IChannelInfo"
  constexpr operator ::System::Runtime::Remoting::IChannelInfo*() noexcept;

  static inline ::System::Runtime::Remoting::ChannelInfo* New_ctor();

  static inline ::System::Runtime::Remoting::ChannelInfo* New_ctor(::System::Object* remoteChannelData);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_channelData() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_channelData();

  constexpr void __cordl_internal_set_channelData(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method .ctor, addr 0x1973fe8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1974050, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* remoteChannelData);

  /// @brief Method get_ChannelData, addr 0x19740f8, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_ChannelData();

  /// @brief Convert to "::System::Runtime::Remoting::IChannelInfo"
  constexpr ::System::Runtime::Remoting::IChannelInfo* i___System__Runtime__Remoting__IChannelInfo() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChannelInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChannelInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChannelInfo(ChannelInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChannelInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChannelInfo(ChannelInfo const&) = delete;

  /// @brief Field channelData, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___channelData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::ChannelInfo, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ChannelInfo, ___channelData) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::ChannelInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ChannelInfo*, "System.Runtime.Remoting", "ChannelInfo");
