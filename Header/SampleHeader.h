// 개발자가 임의 지정
// 다음 매크로가 정의되어 있지 않으면
#ifndef _SAMPLE_H
// 동일 적용
// 매크로를 정의한다
#define _SAMPLE_H
// 이로써 헤더 중복 정의 컴파일 에러 방지

namespace sampleHeader {
	struct TYPE {
		int x;
		int y;
	};
}

#endif
