#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpanStorage)
namespace System::Collections {
class BitArray;
}
namespace System::Data {
struct AggregateType;
}
namespace System::Data {
class DataColumn;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Data::Common {
class TimeSpanStorage;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Common::TimeSpanStorage);
// Type: System.Data.Common::TimeSpanStorage
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data::Common {
// Is value type: false
// CS Name: ::System.Data.Common::TimeSpanStorage*
class CORDL_TYPE TimeSpanStorage : public ::System::Data::Common::DataStorage {
public:
  // Declarations
  /// @brief Field _values, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values))::ArrayW<::System::TimeSpan, ::Array<::System::TimeSpan>*> _values;

  /// @brief Field s_defaultValue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_defaultValue, put = setStaticF_s_defaultValue))::System::TimeSpan s_defaultValue;

  /// @brief Method Aggregate, addr 0x225c9a8, size 0xb68, virtual true, abstract: false, final false
  inline ::System::Object* Aggregate(::ArrayW<int32_t, ::Array<int32_t>*> records, ::System::Data::AggregateType kind);

  /// @brief Method Compare, addr 0x225d510, size 0x17c, virtual true, abstract: false, final false
  inline int32_t Compare(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CompareValueTo, addr 0x225d68c, size 0x160, virtual true, abstract: false, final false
  inline int32_t CompareValueTo(int32_t recordNo, ::System::Object* value);

  /// @brief Method ConvertObjectToXml, addr 0x225de3c, size 0x98, virtual true, abstract: false, final false
  inline ::StringW ConvertObjectToXml(::System::Object* value);

  /// @brief Method ConvertToTimeSpan, addr 0x225d7ec, size 0x228, virtual false, abstract: false, final false
  static inline ::System::TimeSpan ConvertToTimeSpan(::System::Object* value);

  /// @brief Method ConvertValue, addr 0x225da14, size 0xac, virtual true, abstract: false, final false
  inline ::System::Object* ConvertValue(::System::Object* value);

  /// @brief Method ConvertXmlToObject, addr 0x225ddb0, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Object* ConvertXmlToObject(::StringW s);

  /// @brief Method Copy, addr 0x225dac0, size 0x58, virtual true, abstract: false, final false
  inline void Copy(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CopyValue, addr 0x225df1c, size 0x100, virtual true, abstract: false, final false
  inline void CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex);

  /// @brief Method Get, addr 0x225db18, size 0x100, virtual true, abstract: false, final false
  inline ::System::Object* Get(int32_t record);

  /// @brief Method GetEmptyStorage, addr 0x225ded4, size 0x48, virtual true, abstract: false, final false
  inline ::System::Object* GetEmptyStorage(int32_t recordCount);

  static inline ::System::Data::Common::TimeSpanStorage* New_ctor(::System::Data::DataColumn* column);

  /// @brief Method Set, addr 0x225dc18, size 0xd4, virtual true, abstract: false, final false
  inline void Set(int32_t record, ::System::Object* value);

  /// @brief Method SetCapacity, addr 0x225dcec, size 0xc4, virtual true, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  /// @brief Method SetStorage, addr 0x225e01c, size 0x94, virtual true, abstract: false, final false
  inline void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits);

  constexpr ::ArrayW<::System::TimeSpan, ::Array<::System::TimeSpan>*> const& __cordl_internal_get__values() const;

  constexpr ::ArrayW<::System::TimeSpan, ::Array<::System::TimeSpan>*>& __cordl_internal_get__values();

  constexpr void __cordl_internal_set__values(::ArrayW<::System::TimeSpan, ::Array<::System::TimeSpan>*> value);

  /// @brief Method .ctor, addr 0x225c87c, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataColumn* column);

  static inline ::System::TimeSpan getStaticF_s_defaultValue();

  static inline void setStaticF_s_defaultValue(::System::TimeSpan value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpanStorage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeSpanStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeSpanStorage(TimeSpanStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeSpanStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeSpanStorage(TimeSpanStorage const&) = delete;

  /// @brief Field _values, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::TimeSpan, ::Array<::System::TimeSpan>*> ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Common::TimeSpanStorage, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Data::Common::TimeSpanStorage, ____values) == 0x50, "Offset mismatch!");

} // namespace System::Data::Common
NEED_NO_BOX(::System::Data::Common::TimeSpanStorage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::TimeSpanStorage*, "System.Data.Common", "TimeSpanStorage");
